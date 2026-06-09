//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_INMOBILIARIA_H
#define LAB_2_INMOBILIARIA_H
#include "DTInmobiliaria.h"
#include "Usuario.h"


class Inmobiliaria : public Usuario {
private:
    string direccion;
    string URL;
    string telefono;
public:
    Inmobiliaria();
    Inmobiliaria(string direccion, string URL, string telefono);
    string getDireccion();
    string getURL();
    string getTelefono();
    DTInmobiliaria * creoDTInmobiliaria();
};



#endif //LAB_2_INMOBILIARIA_H
