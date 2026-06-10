//
// Created by Nicolás on 13/5/2026.
//

#include "PantallaAltaPublicacion.h"
#include "../Negocio/Sistema.h"

PantallaAltaPublicacion::PantallaAltaPublicacion() {
    this->sistema = Sistema::getInstancia();
}

void PantallaAltaPublicacion::mostrarPantallaAltaPublicacion() {

    string textoI;
    cout << "¡¡¡IMPORTANTE: SELECCIONAR INMOBILIARIA 11 CON INMUEBLE 1, E INMOBILIARIA 22 CON INMUEBLE 2!!!" << endl;
    cout << "¡¡¡IMPORTANTE: SELECCIONAR INMOBILIARIA 11 CON INMUEBLE 1, E INMOBILIARIA 22 CON INMUEBLE 2!!!" << endl;
    cout << "¡¡¡IMPORTANTE: SELECCIONAR INMOBILIARIA 11 CON INMUEBLE 1, E INMOBILIARIA 22 CON INMUEBLE 2!!!" << endl;
    int precioI;
    cout << "__--ALTA PUBLICACION__--" << endl << endl;
    cout << "Lista de inmobiliarias: " << endl;
    set<DTInmobiliaria *> listaInmobiliarias = this->sistema->listarInmobiliarias();
    for (auto inmobiliaria: listaInmobiliarias) {
        cout << "Nickname: " << inmobiliaria->getNickname() << endl;
        cout << "Nombre: " << inmobiliaria->getNombre() << endl << endl;
    }

    DTInmobiliaria * inmobiliariaSeleccionada = seleccionarInmobiliaria(listaInmobiliarias);

    set <DTInmuebleAdministrado*> inmueblesAdministrados = this->sistema->obtenerInmueblesAdministrados(inmobiliariaSeleccionada);

    DTInmuebleAdministrado * inmuebleSeleccionado = seleccionarInmuebleAdministrado(inmueblesAdministrados);
    cout << "Ingrese un texto: ";
    cin >> textoI;
    cout << "Ingrese un precio: ";
    cin >> precioI;
    //DTPublicacion * publicacion = this->sistema->finalizarAlta(inmuebleSeleccionado, textoI, precioI);

}

DTInmobiliaria* PantallaAltaPublicacion::seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias) {

    cout << "Seleccione una inmobiliaria (Nickname): " << endl;
    string nicknameIngresado;
    cin >> nicknameIngresado;
    for (auto inmobiliaria: inmobiliarias) {
        if (inmobiliaria->getNickname() == nicknameIngresado) {
            cout << "Inmobiliaria seleccionada: " << inmobiliaria->getNickname() << endl;
            return inmobiliaria;
        }
    }
    return nullptr;

}

DTInmuebleAdministrado * PantallaAltaPublicacion::seleccionarInmuebleAdministrado(set<DTInmuebleAdministrado*> inmueblesAdministrados) {

    cout << "Seleccione un inmueble (Codigo): " << endl;
    int codigoIngresado;
    cin >> codigoIngresado;
    for (auto inmueble: inmueblesAdministrados) {
        if (inmueble->getCodigo() == codigoIngresado) {
            cout << "Inmueble seleccionado: " << inmueble->getCodigo() << endl;
            return inmueble;
        }
    }
    return nullptr;
}