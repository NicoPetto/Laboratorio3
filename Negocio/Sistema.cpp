//
// Created by Nicolás on 13/5/2026.
//

#include "Sistema.h"
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

}

Sistema::~Sistema() {

}

//AltaImueble
set<DTPropietario*> Sistema::obtenerPropietarios() {
    set <DTPropietario*> propietarios;
    DTPropietario * p1 = new DTPropietario("Brou", "099927270");
    DTPropietario * p2 = new DTPropietario("Santander", "098765432");
    DTPropietario * p3 = new DTPropietario("Caritas", "091234567");
    p1->setNickname("1");
    p1->setNombre("Propietario1");
    p1->setEmail("p1@gmail.com");
    p2->setNickname("2");
    p2->setNombre("Propietario2");
    p2->setEmail("p2@gmail.com");
    p3->setNickname("3");
    p3->setNombre("Propietario3");
    p3->setEmail("p3@gmail.com");

    DTPropietario * dt;

    for (Usuario* u : listaUsuarios) {
        DTPropietario* p = dynamic_cast<DTPropietario*>(u);

        if (p != nullptr)
            propietarios.insert(p);
    }

    return propietarios;
};

// void Sistema::seleccionarPropietario(DTPropietario* propietario) {
//     cout << "Se seleccionó un propietario con nick: ";
//     propietario->getNickname();
// };

int Sistema::registroInmueble(DTInmueble* inmueble, DTPropietario* propietario) {
    int idInmueble = 0;
    cout << "Se registró un inmueble con datos: " << endl;
    cout << "Direccion: " << inmueble->getDireccion() << endl;
    cout << "Superficie: "<< inmueble->getSuperficie() << endl;
    cout << " perteneciente al propietario " << propietario->getNickname() << endl;
    inmueble->setCodigo(idInmueble+1);
    return inmueble->getCodigo();
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