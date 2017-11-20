//
// Created by pawel on 20.11.17.
//

#ifndef GRAFIKA1_OKNO_H
#define GRAFIKA1_OKNO_H

//#include "Biblioteki/Include/GL/freeglut.h"
#include <GL/freeglut.h>

class Okno
{
private:
    int wysokoscOkna;
    int szerokoscOkna;
    int polozenieOknaX;
    int polozenieOknaY;

public:
    Okno();
    Okno(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY);
    ~Okno();

    void stworzenieOkna(int argc, char** argv);
    static void wyswietl();
};

#endif //GRAFIKA1_OKNO_H
