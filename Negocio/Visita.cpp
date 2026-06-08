//
// Created by Nicolás on 16/5/2026.
//

#include "Visita.h"

Visita::Visita() {

}
Visita::Visita(DTFecha fecha, string formaContacto) {
    this->fecha = fecha;
    this->formaContacto = formaContacto;
}

DTFecha Visita::getFecha() {
    return fecha;
}

string Visita::getFormaContacto() {
    return formaContacto;
}