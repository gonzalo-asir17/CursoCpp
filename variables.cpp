#include <iostream>

int main(){
    int edad = 10;

    std::cout << &edad << std::endl;
    std::cout << *&edad << std::endl;
    *&edad = 12;
    std::cout << edad << std::endl;
    return 0;
}