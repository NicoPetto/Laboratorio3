//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_PROPIETARIO_H
#define LAB_2_PROPIETARIO_H

#include <set>

#include "Usuario.h"

#include "DTPropietario.h"
#include "Inmueble.h"
#include <map>

class Inmueble;
class Inmobiliaria;

class Propietario : public Usuario {
private:
    string cuentaBancaria;
    string telefonoP;
    map <int, Inmueble*> inmueblesPropietario;
    map<string, Inmobiliaria*> inmobiliariasMeRepresentan;

public:
    Propietario();
    Propietario(string cuentaBancaria, string telefono);
    string getCuentaBancaria();
    string getTelefonoP();
    DTPropietario * creoDTPropietario();
    DTUsuario * creoDTUsuario() override;
    map <int, Inmueble*> getInmuebles();
    void agregarInmueble(Inmueble* inmueble);
    void mostrarInmuebles();
    void meRepresenta(Inmobiliaria* inmobiliaria);

    set<DTPropietario*> obtengoNoRepresentados(set<DTPropietario*> propietarios);

};



#endif //LAB_2_PROPIETARIO_H
