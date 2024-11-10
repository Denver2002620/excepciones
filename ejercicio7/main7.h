

#ifndef MAIN7_H
#define MAIN7_H



void escribeEnArchivo(std::ofstream& file) {
    if (!file.is_open()) {
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    file << "Hola, mundo!";
}


#endif //MAIN7_H
