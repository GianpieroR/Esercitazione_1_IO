#include <fstream>
#include <iostream>

int main()
{
    std::ifstream file("./data.txt");

    if(file.fail())
    {
        std::cerr << "Non è stato possibile aprire il file" << std::endl;
        return 1;
    }

    std::string tmp;
    std::getline(file, tmp);
    std::cout << tmp << std::endl;

    int val;
    int sum = 0;

    while(file >> val)
    {
        sum = sum + val * val;
    }
    return 0;
}
