//
// Created by Usuario on 11/10/2024.
//

#ifndef MAIN4_H
#define MAIN4_H


class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

void lanzaExcepcion() {
    throw MiExcepcion("Ocurrió un error en la función lanzaExcepcion");
}



#endif //MAIN4_H
