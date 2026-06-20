//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_SISTEMA_H
#define LAB_2_SISTEMA_H
#include "ISistema.h"
using namespace std;

#include <set>
#include <map>


class Sistema : public ISistema {

private:
    Sistema();
    static Sistema* instancia;

public:
    virtual ~Sistema();
    static Sistema* getInstancia();
    map <string, Usuario*> usuariosSistema;
    // map <string, Inmobiliaria*> inmobiliariasSistema;
    set<Inmobiliaria*> inmobiliariasSistema;
    set<Inmueble*> inmueblesSistema;
    set<DTInmuebleAdministrado *> inmueblesAdministradosSistema;

    //AltaUsuario
    void altaUsuario(DTUsuario *usuario);

    //AltaImueble
    set<DTPropietario*> obtenerPropietarios();
    set<Inmueble*> obtenerInmueblesPropietario(string nickname);
    int registroInmueble(DTInmueble* inmueble, DTPropietario* propietario);
    int finalizarAltaInmueble();

    //AltaPublicacion
    set<DTInmobiliaria*> listarInmobiliarias();
    set<DTInmuebleAdministrado*> obtenerInmueblesAdministrados(DTInmobiliaria* inmobiliaria);
    DTPublicacion* finalizarAlta(DTInmuebleAdministrado * inmuebleAdminstrado, string texto, int precio);

    //ConsultarPublicacion
    set<DTInmobiliariaPublicacion*> seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, Inmueble* tipoInmueble);
    DTInmueble* seleccionarInmueble(int codigo);
    set<DTCliente*> obtenerClientes();
    void agendarVisita(string nick, Visita* visita);

    //RepresentarPropietario
    //set<DTInmobiliaria> listarInmobiliarias();
    set <DTPropietario*> verPropietariosInmobiliaria(string nick);
    void representar(Propietario* propietario);

};



#endif //LAB_2_SISTEMA_H
