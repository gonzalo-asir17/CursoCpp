#include <iostream>

#define ALUMNOS 20

struct alumno
{
    std::string nombre;
    int edad;
};

int main(int argc, char *argv[]){

    int i;
    struct alumno clase[ALUMNOS];

    for (i = 0; i < ALUMNOS; i++){
        std::cout << "Introduce el nombre del alumno " << i + 1 << ": ";
        getline(cin,clase[i].nombre);
        std::cout << "Introduce la edad del alumno " << i + 1 << ": ";
        std::cin >> clase[i].edad;
        std::cin.ignore();
    }

    std::cout << "ALUMNOS" << std::endl;
    for (i = 0; i < ALUMNOS; i++){
        std::cout << clase[i].nombre << " -- " << clase[i].edad << std::endl;
    }

    return 0;
}
