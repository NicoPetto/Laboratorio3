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
    DTPropietario * p = new DTPropietario(getCuentaBancaria(), getTelefonoP());
    p->setPassword(getPassword());
    p->setNickname(getNickname());
    p->setEmail(getEmail());
    p->setNombre(getNombre());
    return p;
}

DTUsuario *Propietario::creoDTUsuario() {
    DTPropietario * p = new DTPropietario(getCuentaBancaria(), getTelefonoP());
    p->setPassword(getPassword());
    p->setNickname(getNickname());
    p->setEmail(getEmail());
    p->setNombre(getNombre());
    return p;
}

void Propietario::agregarInmueble(Inmueble * inmueble) {
    inmueblesPropietario[inmueble->getCodigo()] = inmueble;
}

map <int, Inmueble*> Propietario::getInmuebles() {
    return inmueblesPropietario;
}

void Propietario::mostrarInmuebles() {
    for (auto i : inmueblesPropietario) {
        cout << "Codigo: " << i.second->getCodigo() << endl;
        cout << "Direccion: " << i.second->getDireccion() << endl;
        cout << "Año construccion: " << i.second->getAnioConstruccion() << endl;
        cout << "Superficie: " << i.second->getSuperficie() << endl;
        cout << "Numero Puerta: " << i.second->getNumeroPuerta();
    }
}

void Propietario::meRepresenta(Inmobiliaria *inmobiliaria) {
    inmobiliariasMeRepresentan[inmobiliaria->getEmail()] = inmobiliaria;
}
