//
// Created by Nicolás on 16/5/2026.
//

#include "Inmobiliaria.h"
#include "Administra.h"

Inmobiliaria::Inmobiliaria() {

}

Inmobiliaria::Inmobiliaria(string direccion, string URL, string telefono) {
    this->direccion = direccion;
    this->URL = URL;
    this->telefono = telefono;

}

string Inmobiliaria::getDireccion() {
    return this->direccion;
}

string Inmobiliaria::getURL() {
    return this->URL;
}

string Inmobiliaria::getTelefono() {
    return this->telefono;
}

set<Administra*> Inmobiliaria::getAdministracion() {
    return this->listaAdministraciones;
}

DTInmobiliaria *Inmobiliaria::creoDTInmobiliaria() {
    DTInmobiliaria * i = new DTInmobiliaria(getDireccion(), getURL(), getTelefono());
    i->setPassword(getPassword());
    i->setNickname(getNickname());
    i->setEmail(getEmail());
    i->setNombre(getNombre());
    return i;
}

DTUsuario *Inmobiliaria::creoDTUsuario() {
    DTInmobiliaria * i = new DTInmobiliaria(getDireccion(), getURL(), getTelefono());
    i->setPassword(getPassword());
    i->setNickname(getNickname());
    i->setEmail(getEmail());
    i->setNombre(getNombre());
    return i;
}

set<DTInmuebleAdministrado*> Inmobiliaria::detallesAdministracion() {

    set<DTInmuebleAdministrado*> resultado;

    for (Administra* a :listaAdministraciones) {

        DTInmuebleAdministrado* dt = a->obtenerAdministracion();

        if (dt != nullptr) {
            resultado.insert(dt);
        }
    }

    return resultado;

}

set<DTPropietario*> Inmobiliaria::obtengoPropietariosNoRepresentados(set<DTPropietario*> propietarios) {
    set<DTPropietario*> propietariosNoRep;

    for (auto p : propietarios) {
        auto it = propietariosRepresentados.find(p->getEmail());

        if (it == propietariosRepresentados.end()) {
            propietariosNoRep.insert(p);
        }
    }

    return propietariosNoRep;
}

void Inmobiliaria::represento(Propietario *propietario) {
    propietariosRepresentados[propietario->getEmail()] = propietario;
}

set<DTPropietario*> Inmobiliaria::obtengoPropietariosRepresentados() {
    set<DTPropietario*> propietariosRep;

    for (auto p : propietariosRepresentados) {
            propietariosRep.insert(p.second->creoDTPropietario());
        }
    return propietariosRep;

}

set<DTInmueble *> Inmobiliaria::obtengoInmueblesDePropietariosRepresentados() {
    set<DTInmueble*> inmueblesDePropietarios;

    for (const auto& p : propietariosRepresentados) {
        auto inmuebles = p.second->getInmuebles();

        for (const auto& par : inmuebles) {
            Inmueble* inmueble = par.second;
            inmueblesDePropietarios.insert(inmueble->creoDTInmueble());
        }
    }

    return inmueblesDePropietarios;
}

