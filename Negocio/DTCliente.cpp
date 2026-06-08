//
// Created by Nicolás on 16/5/2026.
//

#include "DTCliente.h"

DTCliente::DTCliente() {

}

DTCliente::DTCliente(string apellido, string documento) {
    this->apellido = apellido;
    this->documento = documento;

}

string DTCliente::getApellido() {
    return this->apellido;
}

string DTCliente::getDocumento() {
return this->documento;
}
