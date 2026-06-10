//
// Created by Nicolás on 16/5/2026.
//

#include "DTInmuebleAdministrado.h"

DTInmuebleAdministrado::DTInmuebleAdministrado() {

}
DTInmuebleAdministrado::DTInmuebleAdministrado(int codigo,string direccion, string){

    this->codigo = codigo;
    this->direccion = direccion;
}

int DTInmuebleAdministrado::getCodigo() {
    return this->codigo;
}

string DTInmuebleAdministrado::getDireccion() {
    return this->direccion;
}

Propietario * DTInmuebleAdministrado::getPropietario() {
    return this->propietario;
}

void DTInmuebleAdministrado::setCodigo(int codigo) {
    this->codigo = codigo;
}

void DTInmuebleAdministrado::setDireccion(string direccion) {
    this->direccion = direccion;
}

