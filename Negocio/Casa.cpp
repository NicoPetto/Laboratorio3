//
// Created by Nicolás on 16/5/2026.
//

#include "Casa.h"

Casa::Casa() {

}

Casa::Casa(bool pH, DTTipoTecho tipoTecho){
    this->pH = pH;
    this->tipoTecho = tipoTecho;
}

bool Casa::getPH() {
    return pH;
}

DTTipoTecho Casa::getTipoTecho() {
    return tipoTecho;
}