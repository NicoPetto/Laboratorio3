//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTPROPIETARIO_H
#define LAB_2_DTPROPIETARIO_H

#include "DTUsuario.h"


class DTPropietario : public DTUsuario {
private:
    string cuentaBancaria;
    string telefonoP;
public:
    DTPropietario();
    DTPropietario(string cuentaBancaria, string telefono);
    string getCuentaBancaria();
    string getTelefonoP();
    DTPropietario * creoDTPropietario();
};



#endif //LAB_2_DTPROPIETARIO_H
