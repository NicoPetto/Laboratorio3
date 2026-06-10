//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTINMUEBLEADMINISTRADO_H
#define LAB_2_DTINMUEBLEADMINISTRADO_H

#include <iostream>

#include "Propietario.h"
using namespace std;

class Propietario;


class DTInmuebleAdministrado {
private:
    int codigo;
    string direccion;
    Propietario * propietario;
public:
    DTInmuebleAdministrado();
    DTInmuebleAdministrado(int codigo, string direccion, string);
    int getCodigo();
    string getDireccion();
    Propietario * getPropietario();
    void setCodigo(int codigo);
    void setDireccion(string direccion);

};



#endif //LAB_2_DTINMUEBLEADMINISTRADO_H
