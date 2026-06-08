//
// Created by Nicolás on 16/5/2026.
//

#include "Publicacion.h"

Publicacion::Publicacion() {
}

Publicacion::Publicacion(int codigo, DTTipoPublicacion tipoPublicacion, string texto, int precio) {
    this->codigo = codigo;
    this->tipoPublicacion = tipoPublicacion;
    this->texto = texto;
    this->precio = precio;
}

int Publicacion::getPrecio() {
    return this->precio;
}

string Publicacion::getTexto() {
    return this->texto;
}

DTTipoPublicacion Publicacion::getTipoPublicacion() {
    return this->tipoPublicacion;
}

void Publicacion::setTipoPublicacion(DTTipoPublicacion tipoPublicacion) {
    this->tipoPublicacion = tipoPublicacion;
}

void Publicacion::setTexto(string texto) {
    this->texto = texto;
}

void Publicacion::setPrecio(int precio) {
    this->precio = precio;
}

void Publicacion::setCodigo(int codigo) {
    this->codigo = codigo;
}

int Publicacion::getCodigo() {
    return this->codigo;
}