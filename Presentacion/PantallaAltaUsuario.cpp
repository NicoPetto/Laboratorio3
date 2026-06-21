//
// Created by Nicolás on 20/6/2026.
//

#include "PantallaAltaUsuario.h"

#include "../Negocio/Sistema.h"

PantallaAltaUsuario::PantallaAltaUsuario() {
    this->sistema = Sistema::getInstancia();
}

void PantallaAltaUsuario::mostrarPantallaAltaUsuario() {

    cout << "__--PANTALLA ALTA USUARIO--__" << endl << endl;

    DTUsuario * nuevoUsuario = ingresoDatosUsuario();
    this->sistema->altaUsuario(nuevoUsuario);


}

DTUsuario* PantallaAltaUsuario::ingresoDatosUsuario() {

    DTUsuario* usuario = nullptr;

    string nombreIngresado;
    string nicknameIngresado;
    string emailIngresado;
    string passwordIngresado;
    int tipoUsuario;

    cout << "Indique si quiere registrar un Cliente(1), un Propietario (2),  o una inmobiliaria (3): ";
    cin >> tipoUsuario;
    cout << "Ingrese un nombre: ";
    cin >> nombreIngresado;
    cout << "Ingrese un nickname: ";
    cin >> nicknameIngresado;
    cout << "Ingrese un email: ";
    cin >> emailIngresado;
    cout << "Ingrese un password: ";
    cin >> passwordIngresado;

    switch (tipoUsuario) {
        case 1: {
            string apellidoIngresado;
            string documentoIngresado;
            cout << "Ingrese un apellido: ";
            cin >> apellidoIngresado;
            cout << "Ingrese un documento: ";
            cin >> documentoIngresado;
            usuario = new DTCliente(apellidoIngresado, documentoIngresado);
            break;
        }

        case 2: {
            string cuentaBancariaIngresada;
            string telefonoPIngresado;
            cout << "Ingrese un cuenta bancaria: ";
            cin >> cuentaBancariaIngresada;
            cout << "Ingrese un telefono: ";
            cin >> telefonoPIngresado;
            usuario = new DTPropietario(cuentaBancariaIngresada, telefonoPIngresado);
            break;
        }

        case 3: {
            string direccionIngresada;
            string URLIngresada;
            string telefonoIngresado;
            cout << "Ingrese un URL: ";
            cin >> URLIngresada;
            cout << "Ingrese un telefono: ";
            cin >> telefonoIngresado;
            cout << "Ingrese una direccion: ";
            cin >> direccionIngresada;
            usuario = new DTInmobiliaria(direccionIngresada, URLIngresada, telefonoIngresado);
            break;
        }
    }

    if (usuario == nullptr) {
        return nullptr;
    }

    usuario->setNombre(nombreIngresado);
    usuario->setNickname(nicknameIngresado);
    usuario->setEmail(emailIngresado);
    usuario->setPassword(passwordIngresado);

    return usuario;
}
