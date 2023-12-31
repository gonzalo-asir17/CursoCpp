#include <iostream>

int main(){
    int edad = 10;
    int &ref_edad = edad; // ref es una referencia a edad
    ref_edad = 15; // cambia el valor de edad a 12
    std::cout << edad << std::endl; // imprime el valor de edad
}