//
// Created by Nicolás on 28/6/2026.
//

#include "PantallaAdministrarPropiedad.h"
#include "../Negocio/Sistema.h"

PantallaAdministrarPropiedad::PantallaAdministrarPropiedad() {
    this->sistema = Sistema::getInstancia();
}

void PantallaAdministrarPropiedad::mostrarPantallaAdministrarPropiedad() {

    cout << "__--PANTALLA ADMINISTRAR PROPIEDAD--__" << endl << endl;
    cout << "Inmobiliarias en el sistema: " << endl;
    set<DTInmobiliaria*> listaInmobiliarias = this->sistema->obtenerInmobiliarias();
    for (auto inmobiliaria: listaInmobiliarias) {
        cout << "Nickname: " << inmobiliaria->getNickname() << endl;
        cout << "Nombre: " << inmobiliaria->getNombre() << endl;
        cout << "Email: " << inmobiliaria->getEmail() << endl << endl;
    }

    DTInmobiliaria* inmobiliariaSeleccionada = seleccionarInmobiliaria(listaInmobiliarias);

    cout << "Inmuebles de los propietarios representados por la inmobiliaria " << inmobiliariaSeleccionada->getEmail() << ":" << endl;

    set<DTInmueble*> inmueblesDePropietariosRepresentados = this->sistema->obtenerInmueblesDePropietariosRepresentados(inmobiliariaSeleccionada->getEmail());
    for (auto inmueble: inmueblesDePropietariosRepresentados) {
        cout << "Codigo: " << inmueble->getCodigo() << endl;
        cout << "Direccion: " << inmueble->getDireccion() << endl;
        cout << "Nombre del Propietario: " << inmueble->getPropietario() << endl << endl;
    }

    DTInmueble * inmuebleAdmin = seleccionarInmueble(inmueblesDePropietariosRepresentados);

    this->sistema->administrar(inmobiliariaSeleccionada->getEmail(), inmuebleAdmin->getCodigo());

}

DTInmobiliaria* PantallaAdministrarPropiedad::seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias) {

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

DTInmueble *PantallaAdministrarPropiedad::seleccionarInmueble(set<DTInmueble *> inmuebles) {

    int codigoIngresado;
    cout << "Seleccione una inmueble (codigo): " << endl;
    cin >> codigoIngresado;
    for (auto inmueble: inmuebles) {
        if (inmueble->getCodigo() == codigoIngresado) {
            return inmueble;
        }
    }

    cout << "Error: no se encontro el inmueble con codigo " << codigoIngresado << endl;
    return nullptr;
}
