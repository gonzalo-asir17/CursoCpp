/*Calcular el perimetro y area del rectangulo*/

#include <iostream>


int main(int argc, char const *argv[]) {
    int anchura, altura, perimetro, area;

    std::cout << "Dime la anchura del rectangulo: ";
    std::cin >> anchura;
    std::cout << "Dime la altura del rectangulo: ";
    std::cin >> altura;

    perimetro = (anchura * 2) + (altura * 2);
    area = anchura * altura;

    std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;
    std::cout << "El area del rectangulo es: " << area << std::endl;

    return 0;
}