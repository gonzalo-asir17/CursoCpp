#include <iostream>

int main() {
    float nota1, nota2, nota3;
    float media;

    std::cout << "Introduce la primera nota: ";
    std::cin >> nota1;

    std::cout << "Introduce la segunda nota: ";
    std::cin >> nota2;

    std::cout << "Introduce la tercera nota: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout << "La media de las tres notas es: " << media << std::endl;

    return 0;
}

