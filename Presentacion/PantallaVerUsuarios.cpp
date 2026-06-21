//
// Created by Nicolás on 21/6/2026.
//

#include "PantallaVerUsuarios.h"

#include "../Negocio/Sistema.h"

PantallaVerUsuarios::PantallaVerUsuarios() {
    this->sistema = Sistema::getInstancia();
}

void PantallaVerUsuarios::mostrarPantallaVerUsuarios() {

    int tipoUsuario;

    cout << "__--PANTALLA VER USUARIOS--__" << endl << endl;

    cout << "Ingrese el tipo de usuario a consultar: " << endl;
    cout << "Cliente(1), Propietario(2), Inmobiliaria(3): ";
    cin >> tipoUsuario;
    this->sistema->obtenerInfoUsuarios(tipoUsuario);

}
