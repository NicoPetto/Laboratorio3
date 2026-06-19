//
// Created by Nicolás on 13/5/2026.
//

#include "Sistema.h"

#include <map>
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

    usuariosSistema[p1->getEmail()] = p1;
    usuariosSistema[p2->getEmail()] = p2;
    usuariosSistema[p3->getEmail()] = p3;
    usuariosSistema[p4->getEmail()] = p4;


    Inmobiliaria * i1 = new Inmobiliaria("DirInm1", "www.inm1.com", "111111111");
    i1->setNickname("11");
    i1->setNombre("Inm1");
    Inmobiliaria * i2 = new Inmobiliaria("DirInm2", "www.inm2.com", "222222222");
    i2->setNickname("22");
    i2->setNombre("Inm2");

    inmobiliariasSistema.insert(i1);
    inmobiliariasSistema.insert(i2);



}

Sistema::~Sistema() {

}

//AltaImueble
set<DTPropietario*> Sistema::obtenerPropietarios() {


    set<DTPropietario*> propietarios;

    for (auto par : usuariosSistema) {
        Usuario* u = par.second;

        Propietario* p = dynamic_cast<Propietario*>(u);

        if (p != nullptr) {
            propietarios.insert(p->creoDTPropietario());
        }
    }

    return propietarios;

};


int Sistema::registroInmueble(DTInmueble* inmueble, DTPropietario* propietario) {
    static int codigo = 0;

    Inmueble * i = nullptr;

    string nick = propietario->getNickname();

    for (auto par : usuariosSistema) {
        Usuario* u = par.second;

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
            p->agregarInmueble(i);
            break;
        }

    }

    if (i == nullptr) {
        return -1;
    }


    codigo++;
    i->setCodigo(codigo);
    inmueblesSistema.insert(i);
    return i->getCodigo();
};


//AltaPublicacion
set<DTInmobiliaria*> Sistema::listarInmobiliarias() {
    set<DTInmobiliaria*> inmobiliarias;


    for (Usuario* u : inmobiliariasSistema) {
        Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(u);
        if (i != nullptr) {
            DTInmobiliaria* dt = i->creoDTInmobiliaria();
            inmobiliarias.insert(dt);
        }
    }
    return inmobiliarias;
};

set<DTInmuebleAdministrado*> Sistema::obtenerInmueblesAdministrados(DTInmobiliaria * inmobiliaria) {
    string nick = inmobiliaria->getNickname();

        for (auto par : usuariosSistema) {
            Usuario* u = par.second;

            Propietario* p = dynamic_cast<Propietario*>(u);

        Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(u);

        if (i != nullptr && i->getNickname() == nick) {
            return i->detallesAdministracion();
        }

    }
    return {};
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