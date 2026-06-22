//
// Created by Nicolás on 16/5/2026.
//

#include "Cliente.h"

Cliente::Cliente() {

}

Cliente::Cliente(string apellido, string documento) {
    this->apellido = apellido;
    this->documento = documento;

}

string Cliente::getApellido() {
    return this->apellido;
}

string Cliente::getDocumento() {
    return this->documento;
}

DTCliente *Cliente::creoDTCliente() {
    DTCliente* c = new DTCliente(getApellido(), getDocumento());
    c->setPassword(getPassword());
    c->setNickname(getNickname());
    c->setEmail(getEmail());
    c->setNombre(getNombre());
    return c;
}

DTUsuario *Cliente::creoDTUsuario() {
    DTCliente* c = new DTCliente(getApellido(), getDocumento());
    c->setPassword(getPassword());
    c->setNickname(getNickname());
    c->setEmail(getEmail());
    c->setNombre(getNombre());
    return c;
}
