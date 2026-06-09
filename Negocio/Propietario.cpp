//
// Created by Nicolás on 16/5/2026.
//

#include "Propietario.h"

Propietario::Propietario() {

}

Propietario::Propietario(string cuentaBancaria, string telefonoP) {
    this->cuentaBancaria = cuentaBancaria;
    this->telefonoP = telefonoP;
}

string Propietario::getCuentaBancaria() {
    return this->cuentaBancaria;
}

string Propietario::getTelefonoP() {
    return this->telefonoP;
}

DTPropietario *Propietario::creoDTPropietario() {
    string nick = getNickname();
    string nombre = getNombre();
    string email = getEmail();
    DTPropietario * p = new DTPropietario();
    p -> setNickname(nick);
    p -> setEmail(email);
    p -> setNombre(nombre);
    return p;
}

void Propietario::agregoInmueble(Inmueble * inmueble) {
    inmueblesPropietario.insert(inmueble);
}
