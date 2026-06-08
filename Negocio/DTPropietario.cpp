//
// Created by Nicolás on 16/5/2026.
//

#include "DTPropietario.h"

DTPropietario::DTPropietario() {

}

DTPropietario::DTPropietario(string cuentaBancaria, string telefonoP) {
    this->cuentaBancaria = cuentaBancaria;
    this->telefonoP = telefonoP;
}

string DTPropietario::getCuentaBancaria() {
    return this->cuentaBancaria;
}

string DTPropietario::getTelefonoP() {
    return this->telefonoP;
}

DTPropietario *DTPropietario::creoDTPropietario() {
    string nick = getNickname();
    string nombre = getNombre();
    string email = getEmail();
    DTPropietario * p = new DTPropietario();
    p -> setNickname(nick);
    p -> setEmail(email);
    p -> setNombre(nombre);
}
