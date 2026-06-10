//
// Created by Nicolás on 16/5/2026.
//

#include "Inmueble.h"

Inmueble::Inmueble() {

}

Inmueble::Inmueble(int codigo, string direccion, int numeroPuerta, int superficie, int AnioConstruccion) {
    this->codigo = codigo;
    this->direccion = direccion;
    this->numeroPuerta = numeroPuerta;
    this->superficie = superficie;
    this->AnioConstruccion = AnioConstruccion;
};

Inmueble::~Inmueble() {

}

int Inmueble::getCodigo() {
    return this->codigo;
}

string Inmueble::getDireccion() {
    return this->direccion;
}

int Inmueble::getNumeroPuerta() {
    return this->numeroPuerta;
}

int Inmueble::getSuperficie() {
    return this->superficie;
}

int Inmueble::getAnioConstruccion() {
    return this->AnioConstruccion;
}

set<Administra*>  Inmueble::getAdministraciones() {
    return this->listaAdministraciones;
}
void Inmueble::setCodigo(int codigo) {
    this->codigo = codigo;
}
void Inmueble::setDireccion(string direccion) {
    this->direccion = direccion;
}
void Inmueble::setNumeroPuerta(int numero) {
    this->numeroPuerta = numero;
}
void Inmueble::setSuperficie(int superficie) {
    this->superficie = superficie;
}
void Inmueble::setAnioConstruccion(int AnioConstruccion) {
    this->AnioConstruccion = AnioConstruccion;
}
Propietario * Inmueble::getPropietario() {
    return this->propietario;
}


DTInmuebleAdministrado * Inmueble::creoDTInmuebleAdministrado() {

    int codigo = this->getCodigo();
    string direccion = this->getDireccion();
    string nombre = this->propietario->getNombre();
    DTInmuebleAdministrado * InAdm = new DTInmuebleAdministrado(codigo, direccion, nombre);
    return InAdm;
}
