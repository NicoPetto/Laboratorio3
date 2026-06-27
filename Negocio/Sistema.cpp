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
    Usuario * u1 = new Propietario("CuentaBanco1", "TelProp1");
    u1->setNickname("NickProp1");
    u1->setNombre("Propietario1");
    u1->setEmail("prop1@gmail.com");
    u1->setPassword("PassProp1");
    Usuario * u2 = new Propietario("CuentaBanco2", "TelProp2");
    u2->setNickname("NickProp2");
    u2->setNombre("Propietario2");
    u2->setEmail("prop2@gmail.com");
    u2->setPassword("PassProp2");
    Usuario * u3 = new Cliente("ApellidoCli1", "DocuCli1");
    u3->setNickname("NickCli1");
    u3->setNombre("Cliente1");
    u3->setEmail("cli1@gmail.com");
    u3->setPassword("PassCli1");
    Usuario * u4 = new Inmobiliaria("DirInmo1", "URLInmo1", "TelInmo1");
    u4->setNickname("NickInmo1");
    u4->setNombre("Inmo1");
    u4->setEmail("inmo1@gmail.com");
    u4->setPassword("PassInmo1");
    Usuario * u5 = new Inmobiliaria("DirInmo2", "URLInmo2", "TelInmo2");
    u5->setNickname("NickInmo2");
    u5->setNombre("Inmo2");
    u5->setEmail("inmo2@gmail.com");
    u5->setPassword("PassInmo2");
    Usuario * u6 = new Propietario("CuentaBanco3", "TelProp3");
    u6->setNickname("NickProp3");
    u6->setNombre("Propietario3");
    u6->setEmail("prop3@gmail.com");
    u6->setPassword("PassProp3");
    Usuario * u7 = new Cliente("ApellidoCli2", "DocuCli2");
    u7->setNickname("NickCli2");
    u7->setNombre("Cliente2");
    u7->setEmail("cli2@gmail.com");
    u7->setPassword("PassCli2");

    usuariosSistema[u1->getEmail()] = u1;
    usuariosSistema[u2->getEmail()] = u2;
    usuariosSistema[u3->getEmail()] = u3;
    usuariosSistema[u4->getEmail()] = u4;
    usuariosSistema[u5->getEmail()] = u5;
    usuariosSistema[u6->getEmail()] = u6;
    usuariosSistema[u7->getEmail()] = u7;



}

Sistema::~Sistema() {

}

//AltaUsuario

void Sistema::altaUsuario(DTUsuario* usuario) {
    Usuario * u = nullptr;
    auto it = usuariosSistema.find(usuario->getEmail());
    if (it != usuariosSistema.end()) {
        cout << "Ya existe un usuario con ese email" << endl;
        return;
    }

    if (DTCliente* cliente = dynamic_cast<DTCliente*>(usuario)) {
        u = new Cliente(
            cliente->getApellido(),
            cliente->getDocumento()
            );

    }
    else if (DTPropietario* propietario = dynamic_cast<DTPropietario*>(usuario)) {
        u = new Propietario(
            propietario->getCuentaBancaria(),
            propietario->getTelefonoP()
            );
    }
    else if (DTInmobiliaria* inmobiliaria = dynamic_cast<DTInmobiliaria*>(usuario)) {
        u = new Inmobiliaria(
            inmobiliaria->getDireccion(),
            inmobiliaria->getURL(),
            inmobiliaria->getTelefono()
            );
    }

    if (u == nullptr) {
        cout << "Tipo de usuario invalido" << endl;
        return;
    }

    u->setEmail(usuario->getEmail());
    u->setNombre(usuario->getNombre());
    u->setNickname(usuario->getNickname());
    u->setPassword(usuario->getPassword());

    usuariosSistema[u->getEmail()] = u;
}

//VerUsuarios

set<DTUsuario*> Sistema::obtenerInfoUsuarios(int tipoUsuario) {

    set<DTUsuario*> usuarios;

    for (auto users : usuariosSistema) {
        Usuario* u = users.second;
        switch (tipoUsuario) {
            case 1: {
                Cliente* c = dynamic_cast<Cliente*>(u);
                if (c != nullptr) {
                    usuarios.insert(c->creoDTCliente());
                }
                break;
            }
            case 2: {
                Propietario* p = dynamic_cast<Propietario*>(u);
                if (p != nullptr) {
                    usuarios.insert(p->creoDTPropietario());
                }
                break;
            }
            case 3: {
                Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(u);
                if (i != nullptr) {
                    usuarios.insert(i->creoDTInmobiliaria());
                }
                break;
            }
            case 4: {
                    usuarios.insert(u->creoDTUsuario());
                break;
            }
        }
    }
    return usuarios;
}

DTUsuario* Sistema::obtenerInfoCompletaUsuario(string email) {
    DTUsuario * u;
    auto it = usuariosSistema.find(email);

    if (it == usuariosSistema.end()) {
        return nullptr;
    } else {
        u = it->second->creoDTUsuario();
    }
    return u;
}

//RepresentarPropietario

//set<DTInmobiliaria*> Sistema::obtenerInmobiliarias(){

//}

set<DTPropietario*> Sistema::obtenerPropietariosNoRepresentados(string mailInm) {
    set <DTPropietario*> noRepresentados;
    set <DTPropietario*> propietariosSis;
    for (auto prop : usuariosSistema) {
        Usuario* u = prop.second;
        Propietario* p = dynamic_cast<Propietario*>(u);

        if (p != nullptr) {
            propietariosSis.insert(p->creoDTPropietario());
        }
    }

    auto it= usuariosSistema.find(mailInm);
    if (it != usuariosSistema.end()) {
        Usuario* inmo = it->second;
        Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(inmo);
         return i->obtengoPropietariosNoRepresentados(propietariosSis);
    }
}

void Sistema::representar(string mailInm, string mailProp) {
    auto it1 = usuariosSistema.find(mailInm);
    if (it1 != usuariosSistema.end()) {
        auto it2 = usuariosSistema.find(mailProp);
        if (it2 != usuariosSistema.end()) {
            Usuario* inmo = it1->second;
            Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(inmo);
            Usuario* prop = it2->second;
            Propietario* p = dynamic_cast<Propietario*>(prop);
            i->represento(p);
            p->meRepresenta(i);
        }
    }
}
//Ver Representados

set<DTPropietario*> Sistema::obtenerPropietariosRepresentados(string mailInm) {

    auto it= usuariosSistema.find(mailInm);
    if (it != usuariosSistema.end()) {
        Usuario* inmo = it->second;
        Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(inmo);
        return i->obtengoPropietariosRepresentados();
    }
}

//AltaInmueble
set<DTPropietario*> Sistema::obtenerPropietarios() {

    set<DTPropietario*> propietarios;

    for (auto prop : usuariosSistema) {
        Usuario* u = prop.second;

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

    for (auto prop : usuariosSistema) {
        Usuario* u = prop.second;

        Propietario* p = dynamic_cast<Propietario*>(u);

        if (p != nullptr && p->getNickname() == nick) {

            if (DTCasa* casa = dynamic_cast<DTCasa*>(inmueble)) {
                i = new Casa(
                    casa->getPH(),
                    casa->getTipoTecho()
                    );
                i->setDireccion(inmueble->getDireccion());
                i->setNumeroPuerta(inmueble->getNumeroPuerta());
                i->setSuperficie(inmueble->getSuperficie());
                i->setAnioConstruccion(inmueble->getAnioConstruccion());
            }

            else if (DTApartamento* apartamento = dynamic_cast<DTApartamento*>(inmueble)) {
                i = new Apartamento(
                    apartamento->getNumeroPiso(),
                    apartamento->getAscensor(),
                    apartamento->getGastosComunes()
                    );
                i->setDireccion(inmueble->getDireccion());
                i->setNumeroPuerta(inmueble->getNumeroPuerta());
                i->setSuperficie(inmueble->getSuperficie());
                i->setAnioConstruccion(inmueble->getAnioConstruccion());
            }
            p->agregarInmueble(i);
            cout << "Cantidad luego de agregar: " << p->getInmuebles().size() << endl;
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

set<Inmueble*> Sistema::obtenerInmueblesPropietario(string nickname) {
    Propietario* prop = dynamic_cast<Propietario*>(usuariosSistema[nickname]);

    if (prop != nullptr)
        return prop->getInmuebles();

    return {};
}


//AltaPublicacion
set<DTInmobiliaria*> Sistema::obtenerInmobiliarias() {

    set<DTInmobiliaria*> inmobiliarias;

    for (auto inmo : usuariosSistema) {
        Usuario* u = inmo.second;

        Inmobiliaria* i = dynamic_cast<Inmobiliaria*>(u);

        if (i != nullptr) {
            inmobiliarias.insert(i->creoDTInmobiliaria());
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
    DTPublicacion * p1 = new DTPublicacion(
        codigoPublicacion,
        Alquiler,
        texto,
        precio
        );

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