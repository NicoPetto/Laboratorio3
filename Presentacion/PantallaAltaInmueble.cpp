//
// Created by Nicolás on 13/5/2026.
//

#include "PantallaAltaInmueble.h"

#include "../Negocio/DTTipoTecho.h"
#include "../Negocio/Sistema.h"

PantallaAltaInmueble::PantallaAltaInmueble() {
    this->sistema = Sistema::getInstancia();
}

void PantallaAltaInmueble::mostrarPantallaAltaInmueble() {

    cout << "__--PANTALLA ALTA INMUEBLE--__" << endl << endl;
    cout << "Propietarios en el sistema: " << endl;
    set<DTPropietario*> listaPropietarios = this->sistema->obtenerPropietarios();
    for (auto propietario: listaPropietarios) {
        cout << "Nickname: " << propietario->getNickname() << endl;
        cout << "Nombre: " << propietario->getNombre() << endl;
        cout << "Email: " << propietario->getEmail() << endl << endl;
    }

    DTPropietario* propietarioSeleccionado = seleccionarPropietario(listaPropietarios);
    cout << "Propietario seleccionado: " << propietarioSeleccionado->getNickname() << endl;

    DTInmueble* inmuebleRegistrado = ingresoDatosInmueble();

    this->sistema->registroInmueble(inmuebleRegistrado, propietarioSeleccionado);

    set<Inmueble*> inmuebles = this->sistema->obtenerInmueblesPropietario(propietarioSeleccionado->getEmail());
    cout << "Cantidad de inmuebles: " << inmuebles.size() << endl;
    for (auto inmueble : inmuebles) {
        cout << "Codigo: " << inmueble->getCodigo() << endl;
        cout << "Direccion: " << inmueble->getDireccion() << endl;
        cout << "Año construccion: " << inmueble->getAnioConstruccion() << endl;
        cout << "Superficie: " << inmueble->getSuperficie() << endl;
        cout << "Numero Puerta: " << inmueble->getNumeroPuerta();
    }
}

DTPropietario* PantallaAltaInmueble::seleccionarPropietario(set<DTPropietario*> propietarios) {

    cout << "Seleccione un propietario (Nickname): " << endl;
    string nicknameIngresado;
    cin >> nicknameIngresado;
    for (auto propietario: propietarios) {
        if (propietario->getNickname() == nicknameIngresado) {
            return propietario;
        }
    }

    cout << "Error: no se encontro el propietario con nickname " << nicknameIngresado << endl;

    return nullptr;

}

DTInmueble *PantallaAltaInmueble::ingresoDatosInmueble() {

    string direccionIngresada;
    int numeroPuertaIngresado;
    int superficieIngresada;
    int anioConstruccionIngresado;
    int tipoInmueble;

    DTInmueble * inmueble = nullptr;

    cout << "Ingresa los siguientes datos para registrar el inmueble: " << endl;
    cout << "Direccion: ";
    cin >> direccionIngresada;
    cout << "Numero de puerta: ";
    cin >> numeroPuertaIngresado;
    cout << "Superficie: ";
    cin >> superficieIngresada;
    cout << "Anio construccion: ";
    cin >> anioConstruccionIngresado;
    cout << "Seleccione si es CASA (1) o APARTAMENTO (2): ";
    cin >> tipoInmueble;
    switch (tipoInmueble) {
        case 1: {
            bool pH;
            int numPH;
            DTTipoTecho tipoTecho;
            int numTipoTecho;
            cout << "Si es propiedad horizontal seleccione 1, sino seleccione 0: ";
            cin >> numPH;
            if (numPH == 1) {
                pH = true;
            } else {
                pH = false;
            }
            cout << "Seleccione el tipo del techo: LIVIANO (1), A DOS AGUAS (2), PLANO (3): ";
            cin >> numTipoTecho;
            switch (numTipoTecho) {
                case 1:
                    tipoTecho = Liviano;
                    break;

                case 2:
                    tipoTecho = A_Dos_Aguas;
                    break;

                case 3:
                    tipoTecho = Plano;
                    break;
            }
            inmueble = new DTCasa(pH, tipoTecho);

            break;
        }


        case 2: {
            int numeroPiso;
            bool ascensor;
            int numAscensor;
            int gastosComunes;

            cout << "Ingrese el numero del piso: ";
            cin >> numeroPiso;
            cout << "Indique si tiene ascensor (1) o no (0): ";
            cin >> numAscensor;
            if (numAscensor == 1) {
                ascensor = true;
            } else {
                ascensor = false;
            }
            cout << "Ingrese el monto de gastos comunes: ";
            cin >> gastosComunes;
            inmueble = new DTApartamento(numeroPiso, ascensor, gastosComunes);
            break;
        }

    }

    inmueble->setDireccion(direccionIngresada);
    inmueble->setNumeroPuerta(numeroPuertaIngresado);
    inmueble->setSuperficie(superficieIngresada);
    inmueble->setAnioConstruccion(anioConstruccionIngresado);

    return inmueble;

}
