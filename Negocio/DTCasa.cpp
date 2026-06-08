//
// Created by Nicolás on 16/5/2026.
//

#include "DTCasa.h"

DTCasa::DTCasa() {

}

DTCasa::DTCasa(bool pH, DTTipoTecho tipoTecho){
    this->pH = pH;
    this->tipoTecho = tipoTecho;
}

bool DTCasa::getPH() {
    return pH;
}

DTTipoTecho DTCasa::getTipoTecho() {
    return tipoTecho;
}