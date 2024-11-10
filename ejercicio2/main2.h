//
// Created by Usuario on 11/10/2024.
//

#ifndef MAIN2_H
#define MAIN2_H



// Versión de la función que devuelve un valor de error
int divideError(int a, int b) {
    if (b == 0) {
        return -1; // valor de error
    }
    else {
        return a / b;
    }
}

// Versión de la función que lanza una excepción
int divideException(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("División por cero"); // lanza una excepción
    }
    else {
        return a / b;
    }
}


#endif //MAIN2_H
