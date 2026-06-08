//
// Created by Nicolás on 16/5/2026.
//

#include "Apartamento.h"

Apartamento::Apartamento() {

}

Apartamento::Apartamento(int numeroPiso, bool ascensor, int gastosComunes) {
    this->numeroPiso = numeroPiso;
    this->ascensor = ascensor;
    this->gastosComunes = gastosComunes;

}

int Apartamento::getNumeroPiso() {
    return numeroPiso;
}

bool Apartamento::getAscensor() {
    return ascensor;
}

int Apartamento::getGastosComunes() {
    return gastosComunes;
}