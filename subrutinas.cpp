// Dos clases de subrutinas
//Funciones devuelve un valor
//Procediemietnso no devuelve resultddo

//uso de una funcion en un programa

#include <iostream>

int CalcularMaximo(int num1, int num2);

int main(int argc, char *argv[]) {
    int numero1, numero2, num_maximo;
    std::cout << "Dime el numero1: ";
    std::cin >> numero1;
    std::cout << "Dime el numero2: ";
    std::cin >> numero2;
    num_maximo = CalcularMaximo(numero1,numero2);

    std::cout << "El maximo es " << num_maximo << std::endl;
    return 0;
}

int CalcularMaximo(int num1, int num2){
    if(num1>num2)
        return num1;
    else    
        return num2;
}