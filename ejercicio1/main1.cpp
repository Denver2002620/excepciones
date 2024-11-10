#include "main1.h"
#include<iostream>




int main() {
    int result = divide(5, 0);

    // Se verifica regularmente la bandera de error
    if (errorFlag) {
        std::cout << "Ocurrió un error: división por cero." << std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }

    return 0;
}