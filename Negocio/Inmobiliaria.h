//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_INMOBILIARIA_H
#define LAB_2_INMOBILIARIA_H
#include "Administra.h"
#include "DTInmobiliaria.h"
#include "Usuario.h"

class Administra;
class DTInmuebleAdministrado;

class Inmobiliaria : public Usuario {
private:
    string direccion;
    string URL;
    string telefono;
    set<Administra*>  listaAdministraciones;

public:
    Inmobiliaria();
    Inmobiliaria(string direccion, string URL, string telefono);
    string getDireccion();
    string getURL();
    string getTelefono();
    set<Administra*> getAdministracion();
    DTInmobiliaria * creoDTInmobiliaria();

    set<DTInmuebleAdministrado*> detallesAdministracion();
};



#endif //LAB_2_INMOBILIARIA_H
