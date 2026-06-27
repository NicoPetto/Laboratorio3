//
// Created by Nicolás on 27/6/2026.
//

#include "PantallaVerRepresentados.h"
#include "../Negocio/Sistema.h"

PantallaVerRepresentados::PantallaVerRepresentados() {
    this->sistema = Sistema::getInstancia();
}

void PantallaVerRepresentados::mostrarPantallaVerRepresentados() {

    cout << "__--PANTALLA VER REPRESENTADOS--__" << endl << endl;
    cout << "Inmobiliarias en el sistema: " << endl;
    set<DTInmobiliaria*> listaInmobiliarias = this->sistema->obtenerInmobiliarias();
    for (auto inmobiliaria: listaInmobiliarias) {
        cout << "Nickname: " << inmobiliaria->getNickname() << endl;
        cout << "Nombre: " << inmobiliaria->getNombre() << endl;
        cout << "Email: " << inmobiliaria->getEmail() << endl << endl;
    }

    DTInmobiliaria* inmobiliariaSeleccionada = seleccionarInmobiliaria(listaInmobiliarias);

    cout << "Propietarios representados por la inmobiliaria con mail " << inmobiliariaSeleccionada->getEmail() << ":" << endl;
    set<DTPropietario*> propietariosRepresentados = this->sistema->obtenerPropietariosRepresentados(inmobiliariaSeleccionada->getEmail());
    for (auto propietario: propietariosRepresentados) {
        cout << "Nickname: " << propietario->getNickname() << endl;
        cout << "Nombre: " << propietario->getNombre() << endl;
        cout << "Email: " << propietario->getEmail() << endl << endl;
    }

}

DTInmobiliaria* PantallaVerRepresentados::seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias) {

    cout << "Seleccione una inmobiliaria (email): " << endl;
    string emailIngresado;
    cin >> emailIngresado;
    for (auto inmobiliaria: inmobiliarias) {
        if (inmobiliaria->getEmail() == emailIngresado) {
            return inmobiliaria;
        }
    }

    cout << "Error: no se encontro la inmobiliaria con email " << emailIngresado << endl;

    return nullptr;

}
