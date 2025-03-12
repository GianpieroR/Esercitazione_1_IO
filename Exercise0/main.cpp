#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <numbers>

int main()
{
    int a = 2;
    unsigned int b = 2;
    bool c = true; //false
    double d = 3.5; //1.0e-12
    std::string str = "Hello";
    char e = 'a';
    
    std::cout << sizeof(int) << std::endl;
    std::cout << -pow(2, 31) << " " << pow(2,31) - 1 << std::endl;
    std::cout << std::numeric_limits<int>::min() << " " <<std::numeric_limits<int>::max() <<std::endl;

    std::cout <<std::setprecision(16) << std::scientific; 
    std::cout <<std::numbers::pi << std::endl;

    int a1 = a + d;
    std::string s1 = str + std::to_string(d);
    std::cout << "s1 =" << s1 << std::endl;

    std::cout << "a1 =" << a1 << std::endl;


    return 0;
}
