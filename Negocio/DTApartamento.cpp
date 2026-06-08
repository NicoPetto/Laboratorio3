//
// Created by Nicolás on 16/5/2026.
//

#include "DTApartamento.h"

DTApartamento::DTApartamento() {

}

DTApartamento::DTApartamento(int numeroPiso, bool ascensor, int gastosComunes) {
    this->numeroPiso = numeroPiso;
    this->ascensor = ascensor;
    this->gastosComunes = gastosComunes;

}

int DTApartamento::getNumeroPiso() {
    return numeroPiso;
}

bool DTApartamento::getAscensor() {
    return ascensor;
}

int DTApartamento::getGastosComunes() {
    return gastosComunes;
}