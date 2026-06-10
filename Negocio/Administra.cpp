//
// Created by Nicolás on 9/6/2026.
//

#include "Administra.h"

Administra::Administra() {

}

Administra::Administra(DTFecha* fecha) {
    this->fecha = fecha;
}

Inmobiliaria* Administra::getInmobiliariaAdministra() {
    return this->inmobiliariaAdministra;
}

Inmueble* Administra::getInmuebleAdministra() {
    return this->inmuebleAdministra;
}

DTInmuebleAdministrado* Administra::obtenerAdministracion() {

    if (this->inmuebleAdministra != nullptr) {
        return this->inmuebleAdministra->creoDTInmuebleAdministrado();
    }
    return nullptr;

}