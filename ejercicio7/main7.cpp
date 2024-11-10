#include<stdexcept>
#include<fstream>
#include<iostream>
#include "main7.h"
int main() {
    std::ofstream file("archivo.txt");

    try {
        file.close(); // Cierra el archivo para simular un error
        escribeEnArchivo(file);
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    // Asegurarse de que el archivo esté cerrado
    if (file.is_open()) {
        file.close();
    }

    return 0;
}