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
    int verCompleto;
    string emailUsuario;

    cout << "__--PANTALLA VER USUARIOS--__" << endl << endl;
    cout << "Ingrese el tipo de usuario a consultar: " << endl;
    cout << "Cliente(1), Propietario(2), Inmobiliaria(3), Todos(4): ";
    cin >> tipoUsuario;
    set<DTUsuario*> users = this->sistema->obtenerInfoUsuarios(tipoUsuario);
    mostrarUsuariosObtenidos(users);

    cout << "¿Desea ver la info completa de un usuario? 0-NO, 1-SI: ";
    cin >> verCompleto;
    if (verCompleto == 1) {
        cout << "Ingrese el email del usuario que quiere consultar: ";
        cin >> emailUsuario;
        DTUsuario* usuarioCompleto = this->sistema->obtenerInfoCompletaUsuario(emailUsuario);
        mostrarInfoCompletaUsuario(usuarioCompleto);
    }
}

void PantallaVerUsuarios::mostrarUsuariosObtenidos(set<DTUsuario*> usuarios) {

    cout << "Datos obtenidos: " << endl << endl;

    for (DTUsuario * usuario : usuarios) {
        cout << "Nick: " << usuario->getNickname() << endl;
        cout << "Nombre: " << usuario->getNombre() << endl;
        cout << "Email: " << usuario->getEmail() << endl << endl;
    }
}

void PantallaVerUsuarios::mostrarInfoCompletaUsuario(DTUsuario* usuario) {

    cout << typeid(*usuario).name() << endl;

    cout << "Nick: " << usuario->getNickname() << endl;
    cout << "Password: " << usuario->getPassword() << endl;
    cout << "Nombre: " << usuario->getNombre() << endl;
    cout << "Email: " << usuario->getEmail() << endl;

    if (DTCliente* cliente = dynamic_cast<DTCliente*>(usuario)) {
        cout << "Apellido: " << cliente->getApellido() << endl;
        cout << "Documento: " << cliente->getDocumento() << endl;
    }
    else if (DTPropietario* propietario = dynamic_cast<DTPropietario*>(usuario)) {
        cout << "Cuenta bancaria: " << propietario->getCuentaBancaria() << endl;
        cout << "Telefono: " << propietario->getTelefonoP() << endl;
    }
    else if (DTInmobiliaria* inmobiliaria = dynamic_cast<DTInmobiliaria*>(usuario)) {
        cout << "Direccion: " << inmobiliaria->getDireccion() << endl;
        cout << "URL: " << inmobiliaria->getURL() << endl;
        cout << "Telefono: " << inmobiliaria->getTelefono() << endl;
    }
}
