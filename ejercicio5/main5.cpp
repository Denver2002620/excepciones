#include<iostream>
#include<stdexcept>
#include "main5.h"


int main() {
    try {
        try {
            lanzaExcepcion();
        }
        catch (const std::runtime_error& e) {
            std::cout << "Excepción capturada y manejada. Reactivando..." << std::endl;
            throw; // Relanza la excepción
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción reactivada capturada: " << e.what() << std::endl;
    }

    return 0;
}
