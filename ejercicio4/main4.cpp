#include<stdexcept>
#include<iostream>
#include "main4.h"
int main() {
    try {
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
