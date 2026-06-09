//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_PROPIETARIO_H
#define LAB_2_PROPIETARIO_H

#include <set>

#include "Usuario.h"
#include "DTPropietario.h"
#include "Inmueble.h"


class Propietario : public Usuario {
private:
    string cuentaBancaria;
    string telefonoP;
    set<Inmueble*> inmueblesPropietario;
public:
    Propietario();
    Propietario(string cuentaBancaria, string telefono);
    string getCuentaBancaria();
    string getTelefonoP();
    DTPropietario * creoDTPropietario();
    void agregoInmueble(Inmueble* inmueble);
};



#endif //LAB_2_PROPIETARIO_H
