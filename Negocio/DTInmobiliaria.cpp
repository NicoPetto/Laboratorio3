//
// Created by Nicolás on 16/5/2026.
//

#include "DTInmobiliaria.h"

DTInmobiliaria::DTInmobiliaria() {

}

DTInmobiliaria::DTInmobiliaria(string direccion, string URL, string telefono) {
    this->direccion = direccion;
    this->URL = URL;
    this->telefono = telefono;

}

string DTInmobiliaria::getDireccion() {
    return this->direccion;
}

string DTInmobiliaria::getURL() {
    return this->URL;
}

string DTInmobiliaria::getTelefono() {
    return this->telefono;
}