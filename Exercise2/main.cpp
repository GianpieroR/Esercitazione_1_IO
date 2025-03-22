#include <iostream>
#include <fstream>
#include <iomanip>

//EXERCISE2-ESERCITAZIONE_1_IO

// Definisco fuori dal main una funzione per mappare gli N valori dall'intervallo [1,5] all'intervallo [-1,2]
// per farlo dobbiamo operare una trasformazione affine di coordinate
double mappa(double x) {
    return -1.0 + (x - 1.0) * (3.0 / 4.0); //equivalente a calcolare (3.0/4.0)*x-(7.0/4.0)
}

int main() //per prima cosa apriamo i file di input (in lettura) e output (in scrittura)
   {std::ifstream inputFile("data.txt");  
    std::ofstream outputFile("result.txt");
    
    if (inputFile.fail()) {
        std::cerr << "Errore nell'apertura di data.txt" << std::endl;  // segnalo se ci dovessero essere errori nell'apertura di data.txt
        return 1;
    }
    
    if (outputFile.fail()) {
        std::cerr << "Errore nell'apertura di result.txt" << std::endl; // segnalo se ci dovessero esser errori nell'apertura di result.txt
        return 1;
    }

    // inizializzo i valori
    double sum = 0.0;
    double value;
    
    outputFile << "# N Mean\n"; // definisco la prima riga del file di output come richiesto dal testo
    
    // creo un ciclo while con contatore che trasforma i valori e calcola le relative medie
    int counter = 0;
    while (inputFile >> value) {
        double newValue = mappa(value);
        sum += newValue;
        counter++;
        
        double mean = sum / counter;
        
        // stampo i risultati sui file di output con la precisione richiesta dal testo
        outputFile << counter << " " << std::scientific << std::setprecision(16) << mean << "\n";
    }

    // chiudo correttamente i file di input e output
    inputFile.close(); 
    outputFile.close();
    
    std::cout << "I risultati sono stati salvati correttamente in result.txt." << std::endl; //stampo questo a terminale per verificare che il codice sia stato eseguito senza errori

    return 0;
}
