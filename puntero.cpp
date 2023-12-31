#include <iostream>

int main(){
    int edad = 10;
    int *ptr; // ptr es un puntero a un entero

    ptr = &edad; // ptr apunta a la dirección de edad

    std::cout << &ptr << std::endl; // imprime la dirección de edad
    std::cout << *ptr << std::endl; // imprime la dirección de edad
    *ptr = 12; // cambia el valor de edad a 12
    std::cout << edad << std::endl; // imprime el valor de edad
    return 0;

}