
#ifndef MAIN3_H
#define MAIN3_H



void func3() {
    throw std::runtime_error("Error en func3");
}

void func2() {
    func3();
}

void func1() {
    func2();
}


#endif //MAIN3_H
