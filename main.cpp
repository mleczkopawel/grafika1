#include <iostream>
#include "Okno.h"

int main(int argc, char **argv) {
    std::cout << "Hello, World!" << std::endl;
    Okno *okno = new Okno();
    okno->stworzenieOkna(argc, argv);
    okno->wyswietl();
    return 0;
}