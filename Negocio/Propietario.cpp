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

void Propietario::agregarInmueble(Inmueble * inmueble) {
    inmueblesPropietario.insert(inmueble);
}

set<Inmueble *> Propietario::getInmuebles() {
    return inmueblesPropietario;
}

void Propietario::mostrarInmuebles() {
    for (Inmueble* i : inmueblesPropietario) {
        cout << "Codigo: " << i->getCodigo() << endl;
        cout << "Direccion: " << i->getDireccion() << endl;
        cout << "Año construccion: " << i->getAnioConstruccion() << endl;
        cout << "Superficie: " << i->getSuperficie() << endl;
        cout << "Numero Puerta: " << i->getNumeroPuerta();
    }
}