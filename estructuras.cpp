#include <iostream>

struct libro
{
    int id;
    std::string titulo;
    std::string autor;
};


int main(int argc, char const *argv[]){

    struct libro mi_libro;
    std::cout << "Introduce el identificador: ";
    std::cin >> mi_libro.id;
    std::cin.ignore();
    std::cout << "Introduce el titulo: ";
    getline(std::cin, mi_libro.titulo);
    std::cout << "Introduce el autor: ";
    getline(std::cin, mi_libro.autor);
    

    std::cout << "Identificador: " << mi_libro.id << std::endl;
    std::cout << "Titulo: " << mi_libro.titulo << std::endl;
    std::cout << "Autor: " << mi_libro.autor << std::endl;

    return 0;


}