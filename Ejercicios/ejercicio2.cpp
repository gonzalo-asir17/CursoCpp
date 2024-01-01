/*Crea un programa que pida dos número enteros al usuario y diga si alguno de ellos es múltiplo del otro. 
Crea una función EsMultiplo que reciba los dos números, y devuelve si el primero es múltiplo del segundo.*/

#include <iostream>

int EsMultiplo(int num1, int num2);


int main(){
    int num1, num2;
    std::cout << "Introduzca un numero: ";
    std::cin >> num1;
    std::cout << "Introduzca otro numero: ";
    std::cin >> num2;
    if (EsMultiplo(num1, num2))
        std::cout << "El numero " << num1 << " es multiplo de " << num2 << std::endl;
    else
        std::cout << "El numero " << num1 << " no es multiplo de " << num2 << std::endl;

}

int EsMultiplo(int numero1, int numero2){
    if (numero1 % numero2 == 0)
        return true;
    else
        return false;
}