//
// Created by Nicolás on 13/5/2026.
//

#include "Sistema.h"

#include <optional>
#include <set>

#include "DTInmueble.h"
#include "DTPropietario.h"
#include "DTCliente.h"
#include "DTInmobiliaria.h"
#include "DTPublicacion.h"
#include "DTInmuebleAdministrado.h"
#include "DTInmobiliariaPublicacion.h"
#include "Visita.h"


Sistema* Sistema::instancia = nullptr;

Sistema::Sistema() {

    Usuario * p1 = new Propietario("Brou", "099927270");
    Usuario * p2 = new Propietario("Santander", "098765432");
    Usuario * p3 = new Cliente("Pettorossi", "51457002");
    Usuario * p4 = new Propietario("Caritas", "091234567");
    p1->setNickname("1");
    p1->setNombre("Propietario1");
    p1->setEmail("p1@gmail.com");
    p2->setNickname("2");
    p2->setNombre("Propietario2");
    p2->setEmail("p2@gmail.com");
    p3->setNickname("3");
    p3->setNombre("Cliente3");
    p3->setEmail("c3@gmail.com");
    p4->setNickname("4");
    p4->setNombre("Propietario4");
    p4->setEmail("p4@gmail.com");

    usuariosSistema.insert(p1);
    usuariosSistema.insert(p2);
    usuariosSistema.insert(p3);
    usuariosSistema.insert(p4);

}

Sistema::~Sistema() {

}

//AltaImueble
set<DTPropietario*> Sistema::obtenerPropietarios() {

    set<DTPropietario*> propietarios;


    for (Usuario* u : usuariosSistema) {
        Propietario* p = dynamic_cast<Propietario*>(u);
        if (p != nullptr) {
            DTPropietario* dt = p->creoDTPropietario();
            propietarios.insert(dt);
        }
    }
    return propietarios;


};


int Sistema::registroInmueble(DTInmueble* inmueble, DTPropietario* propietario) {
    static int codigo = 0;

    Inmueble * i = nullptr;

    string nick = propietario->getNickname();

    for (Usuario* u : usuariosSistema) {

        Propietario* p = dynamic_cast<Propietario*>(u);

        if (p != nullptr && p->getNickname() == nick) {

            if (DTCasa* casa = dynamic_cast<DTCasa*>(inmueble)) {
                i = new Casa(casa->getPH(), casa->getTipoTecho());
                i->setDireccion(inmueble->getDireccion());
                i->setNumeroPuerta(inmueble->getNumeroPuerta());
                i->setSuperficie(inmueble->getSuperficie());
                i->setAnioConstruccion(inmueble->getAnioConstruccion());


            }

            else if (DTApartamento* apartamento = dynamic_cast<DTApartamento*>(inmueble)) {
                i = new Apartamento(apartamento->getNumeroPiso(), apartamento->getAscensor(), apartamento->getGastosComunes());

                i->setDireccion(inmueble->getDireccion());
                i->setNumeroPuerta(inmueble->getNumeroPuerta());
                i->setSuperficie(inmueble->getSuperficie());
                i->setAnioConstruccion(inmueble->getAnioConstruccion());

            }
            p->agregoInmueble(i);
            break;
        }

    }

    if (i == nullptr) {
        return -1;
    }


    codigo++;
    i->setCodigo(codigo);
    inmueblesSistema.insert(i);
    cout << "Se registró un inmueble con datos: " << endl;
    cout << "Direccion: " << i->getDireccion() << endl;
    cout << "Superficie: "<< i->getSuperficie() << endl;
    cout << " perteneciente al propietario " << propietario->getNickname() << endl;
    return i->getCodigo();
};


//AltaPublicacion
set<DTInmobiliaria*> Sistema::listarInmobiliarias() {
    set<DTInmobiliaria*> inmobiliarias;
    DTInmobiliaria * i1 = new DTInmobiliaria("DirInm1", "www.inm1.com", "111111111");
    i1->setNickname("11");
    i1->setNombre("Inm1");
    DTInmobiliaria * i2 = new DTInmobiliaria("DirInm2", "www.inm2.com", "222222222");
    i2->setNickname("22");
    i2->setNombre("Inm2");
    inmobiliarias.insert(i1);
    inmobiliarias.insert(i2);
    return inmobiliarias;
};

set<DTInmuebleAdministrado*> Sistema::obtenerInmueblesAdministrados(DTInmobiliaria * inmobiliaria) {
    set<DTInmuebleAdministrado*> inmueblesAdministrados;
    DTFecha fecha = DTFecha(1111,11,11);
    if (inmobiliaria->getNickname() == "11") {
        DTInmuebleAdministrado * ia1 = new DTInmuebleAdministrado(1, "dirInmAdm1", fecha);
        inmueblesAdministrados.insert(ia1);
    } else if (inmobiliaria->getNickname() == "22") {
        DTInmuebleAdministrado * ia2 = new DTInmuebleAdministrado(2, "dirInmAdm2", fecha);
        inmueblesAdministrados.insert(ia2);
    }

    return inmueblesAdministrados;
};

DTPublicacion* Sistema::finalizarAlta(DTInmuebleAdministrado * inmuebleAdministrado, string texto, int precio) {
    int codigoPublicacion = 1;
    DTPublicacion * p1 = new DTPublicacion(codigoPublicacion, Alquiler, texto, precio);
    cout << "Codigo del inmueble administrado: " << inmuebleAdministrado->getCodigo() << endl;
    cout << "Direccion del inmueble: " << inmuebleAdministrado->getDireccion() << endl;
    return p1;
};

//ConsultarPublicacion
set<DTInmobiliariaPublicacion*> Sistema::seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, Inmueble* tipoInmueble) {
    set<DTInmobiliariaPublicacion*> inmobiliariaPublicaciones;
    cout << "Se seleccionaron publicaciones";
    return inmobiliariaPublicaciones;
};

DTInmueble* Sistema::seleccionarInmueble(int codigo) {
    DTInmueble* inmueble = new DTInmueble();
    cout << "Se seleccionó un inmueble";
    return inmueble;
};

set<DTCliente*> Sistema::obtenerClientes() {
    set<DTCliente*> clientes;
    cout << "Se obtuvieron clientes";
    return clientes;
};

void Sistema::agendarVisita(string nick, Visita* visita) {
    cout << "Se agendaron visitas";
};

//RepresentarPropietario
//set<DTInmobiliaria> listarInmobiliarias();
set <DTPropietario*> Sistema::verPropietariosInmobiliaria(string nick) {
    set<DTPropietario*> propietarios;
    cout << "Se obtuvieron propietarios para inmobiliarias";
    return propietarios;
};

void Sistema::representar(Propietario* propietario) {
    cout << "Se representó un propietario";
};

Sistema* Sistema::getInstancia() {
    if (Sistema::instancia == nullptr) {
        Sistema::instancia = new Sistema();
    }
    return Sistema::instancia;
}