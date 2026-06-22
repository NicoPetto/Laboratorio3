//
// Created by Nicolás on 16/5/2026.
//

#include "Inmobiliaria.h"
#include "Administra.h"

Inmobiliaria::Inmobiliaria() {

}

Inmobiliaria::Inmobiliaria(string direccion, string URL, string telefono) {
    this->direccion = direccion;
    this->URL = URL;
    this->telefono = telefono;

}

string Inmobiliaria::getDireccion() {
    return this->direccion;
}

string Inmobiliaria::getURL() {
    return this->URL;
}

string Inmobiliaria::getTelefono() {
    return this->telefono;
}

set<Administra*> Inmobiliaria::getAdministracion() {
    return this->listaAdministraciones;
}

DTInmobiliaria *Inmobiliaria::creoDTInmobiliaria() {
    DTInmobiliaria * i = new DTInmobiliaria(getDireccion(), getURL(), getTelefono());
    i->setPassword(getPassword());
    i->setNickname(getNickname());
    i->setEmail(getEmail());
    i->setNombre(getNombre());
    return i;
}

DTUsuario *Inmobiliaria::creoDTUsuario() {
    DTInmobiliaria * i = new DTInmobiliaria(getDireccion(), getURL(), getTelefono());
    i->setPassword(getPassword());
    i->setNickname(getNickname());
    i->setEmail(getEmail());
    i->setNombre(getNombre());
    return i;
}

set<DTInmuebleAdministrado*> Inmobiliaria::detallesAdministracion() {

    set<DTInmuebleAdministrado*> resultado;

    for (Administra* a :listaAdministraciones) {

        DTInmuebleAdministrado* dt = a->obtenerAdministracion();

        if (dt != nullptr) {
            resultado.insert(dt);
        }
    }


    return resultado;

}
