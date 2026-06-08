//
// Created by Nicolás on 16/5/2026.
//

#include "Inmobiliaria.h"

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