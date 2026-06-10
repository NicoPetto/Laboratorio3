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
    string nick = getNickname();
    string nombre = getNombre();
    DTInmobiliaria * i = new DTInmobiliaria();
    i -> setNickname(nick);
    i -> setNombre(nombre);
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
