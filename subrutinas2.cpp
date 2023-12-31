#include <iostream>
#include <string>

void Subrayar(std::string cad);

int main(int argc, char *argv[]){
    std::string nombre;
    std::cout << "Dame un nombre: ";
    getline(std::cin,nombre);
    Subrayar(nombre);
    return 0;
}

void Subrayar(std::string cad){
    
    std::cout << cad << std::endl;
    for (int i = 0; i < cad.size(); i++)
        std::cout << "-";
}


