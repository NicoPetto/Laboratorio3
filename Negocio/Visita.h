//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_VISITA_H
#define LAB_2_VISITA_H

#include <iostream>
using namespace std;

#include "DTFecha.h"

class Visita {
private:
    DTFecha fecha;
    string formaContacto;
public:
    Visita();
    Visita(DTFecha fecha, string formaContacto);
    DTFecha getFecha();
    string getFormaContacto();
};



#endif //LAB_2_VISITA_H
