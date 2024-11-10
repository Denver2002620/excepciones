//
// Created by Usuario on 11/10/2024.
//

#ifndef MAIN1_H
#define MAIN1_H





// Variable global que actúa como bandera de error
bool errorFlag = false;

int divide(int a, int b) {
    if (b == 0) {
        // Si ocurre un error, se establece la bandera de error
        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}



#endif //MAIN1_H
