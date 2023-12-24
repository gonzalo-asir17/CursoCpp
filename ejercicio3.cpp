#include <iostream>
#include <string> // Include the <string> header for string usage

int main(int argc, char const *argv[]) {
    std::string nombre; 
    int edad;
    std::cout << "Bienvenido..." << std::endl;
    std::cout << "Dime el nombre: ";
    std::getline(std::cin, nombre); 
    std::cout << "Dime la edad de " << nombre << ": ";
    std::cin >> edad;
    std::cout << nombre << " tiene " << edad << " años." << std::endl;
    return 0;
}
