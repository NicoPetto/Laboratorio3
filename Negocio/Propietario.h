//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_PROPIETARIO_H
#define LAB_2_PROPIETARIO_H

#include "Usuario.h"
#include "DTPropietario.h"


class Propietario : public Usuario {
private:
    string cuentaBancaria;
    string telefonoP;
public:
    Propietario();
    Propietario(string cuentaBancaria, string telefono);
    string getCuentaBancaria();
    string getTelefonoP();
    DTPropietario * creoDTPropietario();
};



#endif //LAB_2_PROPIETARIO_H
