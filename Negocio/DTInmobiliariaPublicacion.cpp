//
// Created by Nicolás on 16/5/2026.
//

#include "DTInmobiliariaPublicacion.h"

DTInmobiliariaPublicacion::DTInmobiliariaPublicacion() {

}

DTInmobiliariaPublicacion::DTInmobiliariaPublicacion(int codigo, DTFecha fechaAdm, string texto, string nombre, int precio) {
    this->codigo = codigo;
    this->fechaAdm = fechaAdm;
    this->texto = texto;
    this->nombre = nombre;
    this->precio = precio;
}

int DTInmobiliariaPublicacion::getCodigo() {
    return codigo;
}

DTFecha DTInmobiliariaPublicacion::getFechaAdm() {
    return fechaAdm;
}

string DTInmobiliariaPublicacion::getTexto() {
    return texto;
}

string DTInmobiliariaPublicacion::getNombre() {
    return nombre;
}

int DTInmobiliariaPublicacion::getPrecio() {
    return precio;
}


