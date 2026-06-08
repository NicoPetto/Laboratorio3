//
// Created by Nicolás on 16/5/2026.
//

#include "Usuario.h"

Usuario::Usuario() {

}

Usuario::Usuario(string nickname, string password, string nombre, string email) {
    this->nickname = nickname;
    this->password = password;
    this->nombre = nombre;
    this->email = email;
}

Usuario::~Usuario() {

}

string Usuario::getNickname() {
    return this->nickname;
}

string Usuario::getPassword() {
    return this->password;
}

string Usuario::getNombre() {
    return this->nombre;
}

string Usuario::getEmail() {
    return this->email;
}

void Usuario::setNickname(string nickname) {
    this->nickname = nickname;
}
void Usuario::setPassword(string password) {
    this->password = password;
}
void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}
void Usuario::setEmail(string email) {
    this->email = email;
}
