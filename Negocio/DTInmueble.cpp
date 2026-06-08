//
// Created by Nicolás on 16/5/2026.
//

#include "DTInmueble.h"

DTInmueble::DTInmueble() {

}

DTInmueble::DTInmueble(int codigo, string direccion, int numeroPuerta, int superficie, int AnioConstruccion) {
    this->codigo = codigo;
    this->direccion = direccion;
    this->numeroPuerta = numeroPuerta;
    this->superficie = superficie;
    this->AnioConstruccion = AnioConstruccion;
};

DTInmueble::~DTInmueble() {

}

int DTInmueble::getCodigo() {
    return this->codigo;
}

string DTInmueble::getDireccion() {
    return this->direccion;
}

int DTInmueble::getNumeroPuerta() {
    return this->numeroPuerta;
}

int DTInmueble::getSuperficie() {
    return this->superficie;
}

int DTInmueble::getAnioConstruccion() {
    return this->AnioConstruccion;
}
void DTInmueble::setCodigo(int codigo) {
    this->codigo = codigo;
}
void DTInmueble::setDireccion(string direccion) {
    this->direccion = direccion;
}
void DTInmueble::setNumeroPuerta(int numero) {
    this->numeroPuerta = numero;
}
void DTInmueble::setSuperficie(int superficie) {
    this->superficie = superficie;
}
void DTInmueble::setAnioConstruccion(int AnioConstruccion) {
    this->AnioConstruccion = AnioConstruccion;
}
