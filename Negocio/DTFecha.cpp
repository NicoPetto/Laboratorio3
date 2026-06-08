//
// Created by Nicolás on 16/5/2026.
//

#include "DTFecha.h"

DTFecha::DTFecha() {

}

DTFecha::DTFecha(int anio, int mes, int dia) {
    this->anio = anio;
    this->mes = mes;
    this->dia = dia;
}

int DTFecha::getAnio() {
    return this->anio;
}

int DTFecha::getMes() {
    return this->mes;
}

int DTFecha::getDia() {
    return this->dia;
}

void DTFecha::setAnio(int anio) {
    this->anio = anio;
}
void DTFecha::setMes(int mes) {
    this->mes = mes;
}
void DTFecha::setDia(int dia) {
    this->dia = dia;
}
