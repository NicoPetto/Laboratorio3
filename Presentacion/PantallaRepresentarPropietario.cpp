//
// Created by Nicolás on 13/5/2026.
//

#include "PantallaRepresentarPropietario.h"
#include "../Negocio/Sistema.h"

PantallaRepresentarPropietario::PantallaRepresentarPropietario() {
    this->sistema = Sistema::getInstancia();
}

void PantallaRepresentarPropietario::mostrarPantallaRepresentarPropietario() {

    cout << "__--PANTALLA REPRESENTAR PROPIETARIO--__" << endl << endl;
    cout << "Inmobiliarias en el sistema: " << endl;
    set<DTInmobiliaria*> listaInmobiliarias = this->sistema->obtenerInmobiliarias();
    for (auto inmobiliaria: listaInmobiliarias) {
        cout << "Nickname: " << inmobiliaria->getNickname() << endl;
        cout << "Nombre: " << inmobiliaria->getNombre() << endl;
        cout << "Email: " << inmobiliaria->getEmail() << endl << endl;
    }

    DTInmobiliaria* inmobiliariaSeleccionada = seleccionarInmobiliaria(listaInmobiliarias);

    cout << "Propietarios no representados por la inmobiliaria con mail " << inmobiliariaSeleccionada->getEmail() << ":" << endl;
    set<DTPropietario*> propietariosNoRepresentados = this->sistema->obtenerPropietariosNoRepresentados(inmobiliariaSeleccionada->getEmail());
    for (auto propietario: propietariosNoRepresentados) {
        cout << "Nickname: " << propietario->getNickname() << endl;
        cout << "Nombre: " << propietario->getNombre() << endl;
        cout << "Email: " << propietario->getEmail() << endl << endl;
    }

    DTPropietario* propietarioSeleccionado = seleccionarPropietarioARepresentar(propietariosNoRepresentados);
    this->sistema->representar(inmobiliariaSeleccionada->getEmail(), propietarioSeleccionado->getEmail());


}

DTInmobiliaria* PantallaRepresentarPropietario::seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias) {

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

DTPropietario *PantallaRepresentarPropietario::seleccionarPropietarioARepresentar(set<DTPropietario *> propietarios) {
    cout << "Seleccione un propietario (email): " << endl;
    string emailIngresado;
    cin >> emailIngresado;
    for (auto propietario: propietarios) {
        if (propietario->getEmail() == emailIngresado) {
            return propietario;
        }
    }

    cout << "Error: no se encontro el propietario con email " << emailIngresado << endl;

    return nullptr;
}

