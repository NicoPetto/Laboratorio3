//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_ISISTEMA_H
#define LAB_2_ISISTEMA_H

#include <set>

#include "DTInmueble.h"
#include "Inmueble.h"
#include "Propietario.h"
#include "DTCliente.h"
#include "Cliente.h"
#include "Inmobiliaria.h"
#include "DTInmobiliaria.h"
#include "DTPublicacion.h"
#include "Publicacion.h"
#include "DTInmuebleAdministrado.h"
#include "DTInmobiliariaPublicacion.h"
#include "Visita.h"
#include "DTCasa.h"
#include "DTApartamento.h"
#include "Casa.h"
#include "Apartamento.h"


class ISistema {
    public:

    //AltaUsuario
    virtual void altaUsuario(DTUsuario* usuario) = 0;

    //VerUsuarios
    virtual set<DTUsuario*> obtenerInfoUsuarios(int tipoUsuario) = 0;
    virtual DTUsuario* obtenerInfoCompletaUsuario(string email) = 0;


    //AltaInmueble
    virtual set<DTPropietario*> obtenerPropietarios() = 0;
    virtual int registroInmueble(DTInmueble* inmueble, DTPropietario* propietario) = 0;
    virtual set<Inmueble*> obtenerInmueblesPropietario(string nickname) = 0;

    //AltaPublicacion
    virtual set<DTInmobiliaria*> listarInmobiliarias() = 0;
    virtual set<DTInmuebleAdministrado*> obtenerInmueblesAdministrados(DTInmobiliaria * inmobiliaria) = 0;
    virtual DTPublicacion* finalizarAlta(DTInmuebleAdministrado * inmuebleAdministrado, string texto, int precio) = 0;

    //ConsultarPublicacion
    virtual set<DTInmobiliariaPublicacion*> seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, Inmueble* tipoInmueble) = 0;
    virtual DTInmueble* seleccionarInmueble(int codigo) = 0;
    virtual set<DTCliente*> obtenerClientes() = 0;
    virtual void agendarVisita(string nick, Visita* visita) = 0;

    //RepresentarPropietario
    // virtual set<DTInmobiliaria *> listarInmobiliarias() = 0;
    virtual set <DTPropietario*> verPropietariosInmobiliaria(string nick) = 0;
    virtual void representar(Propietario* propietario) = 0;


};

#endif //LAB_2_ISISTEMA_H
