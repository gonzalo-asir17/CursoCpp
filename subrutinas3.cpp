#include <iostream>

void PasoPorValor(int &num);

int main(int argc, char *argv[]){
    int numero1 = 5;
    PasoPorValor(numero1);
    std::cout << "Este es el valor que no se modifica: " << numero1 << std::endl;
    return  0;
}

void PasoPorValor(int &num){
    num = num + 1;
    std::cout << "Este es el valor modificado: " << num << std::endl;
}