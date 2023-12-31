#include <iostream>

int CalcularFactorial(int num);

int main(){
    std::cout << "El factorial de 6 es " << CalcularFactorial(6) << std::endl;
    return 0;
}

int CalcularFactorial(int num){
    if (num== 0 || num == 1){
        return 1;
    }
    return num * CalcularFactorial(num - 1);
}