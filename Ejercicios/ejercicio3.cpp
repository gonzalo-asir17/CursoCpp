/*Crear una función que calcule la temperatura media de un día a partir de la 
temperatura máxima y mínima. Crear un programa principal, que utilizando la 
función anterior, vaya pidiendo la temperatura máxima y mínima de cada día y 
vaya mostrando la media. El programa pedirá el número de días que se van a introducir.*/

#include <iostream>

int TempMedia (int temperatura);

int main(){
    int tempmax;
    int tempmin;
    int dias;
    std::cout << "Cuantos dias quiere saber la temperatura: ";
    std::cin >> dias;

    std::cout << std::endl;

    for(int i = 0; i < dias; i++){
        std::cout << "Introduzca la temperatura maxima de hoy dia " << i + 1 << ": "; 
        std::cin >> tempmax;
        std::cout << "Introduzca la temperatura minima de hoy dia " << i + 1 << ": ";
        std::cin >> tempmin;
        std::cout << std::endl;
    }
}

int TempMedia (int temperatura){

}