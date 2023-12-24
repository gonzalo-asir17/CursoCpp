#include <iostream>

#define Anchura 15
#define Altura 5
#define NUEVALINEA '\n'

int main() {
    int area;

    area = Anchura * Altura;
    std::cout << area;
    std::cout << NUEVALINEA;

    return 0;
}