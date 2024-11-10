#include<stdexcept>
#include "main3.h"
int main() {
    try {
        func1();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada en main: " << e.what() << std::endl;
    }

    return 0;
}