//
// Created by Nicolás on 16/5/2026.
//

#include "DTPublicacion.h"

DTPublicacion::DTPublicacion() {
}

DTPublicacion::DTPublicacion(int codigo, DTTipoPublicacion tipoPublicacion, string texto, int precio) {
    this->codigo = codigo;
    this->tipoPublicacion = tipoPublicacion;
    this->texto = texto;
    this->precio = precio;
}

int DTPublicacion::getPrecio() {
    return this->precio;
}

string DTPublicacion::getTexto() {
    return this->texto;
}

DTTipoPublicacion DTPublicacion::getTipoPublicacion() {
    return this->tipoPublicacion;
}

void DTPublicacion::setTipoPublicacion(DTTipoPublicacion tipoPublicacion) {
    this->tipoPublicacion = tipoPublicacion;
}

void DTPublicacion::setTexto(string texto) {
    this->texto = texto;
}

void DTPublicacion::setPrecio(int precio) {
    this->precio = precio;
}

void DTPublicacion::setCodigo(int codigo) {
    this->codigo = codigo;
}

int DTPublicacion::getCodigo() {
    return this->codigo;
}