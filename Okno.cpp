//
// Created by pawel on 20.11.17.
//


#include <iostream>
#include "Okno.h"

Okno::Okno() {
    wysokoscOkna = 768;
    szerokoscOkna = 1024;
    polozenieOknaX = 100;
    polozenieOknaY = 100;
}

Okno::Okno(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY) {
    this->wysokoscOkna = wysokoscOkna;
    this->szerokoscOkna = szerokoscOkna;
    this->polozenieOknaX = polozenieOknaX;
    this->polozenieOknaY = polozenieOknaY;
}

Okno::~Okno() {

}

void Okno::stworzenieOkna(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(768, 1024);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("okno1");
}

void Okno::wyswietl() {
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
    glutShowWindow();
}
