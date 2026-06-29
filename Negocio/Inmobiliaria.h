//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_INMOBILIARIA_H
#define LAB_2_INMOBILIARIA_H
#include "Administra.h"
#include "DTInmobiliaria.h"
#include "DTPropietario.h"
#include "Usuario.h"
#include <map>

#include "DTInmueble.h"

class Administra;
class DTInmuebleAdministrado;
class Propietario;

class Inmobiliaria : public Usuario {
private:
    string direccion;
    string URL;
    string telefono;
    map <string, Propietario*> propietariosRepresentados;
    set<Administra*>  listaAdministraciones;

public:
    Inmobiliaria();
    Inmobiliaria(string direccion, string URL, string telefono);
    string getDireccion();
    string getURL();
    string getTelefono();
    set<Administra*> getAdministracion();
    DTInmobiliaria * creoDTInmobiliaria();
    DTUsuario* creoDTUsuario() override;
    void represento(Propietario* propietario);

    set<DTPropietario*> obtengoPropietariosNoRepresentados(set<DTPropietario*> propietarios);
    set<DTPropietario*> obtengoPropietariosRepresentados();
    set<DTInmueble*> obtengoInmueblesDePropietariosRepresentados();

    set<DTInmuebleAdministrado*> detallesAdministracion();
};



#endif //LAB_2_INMOBILIARIA_H
