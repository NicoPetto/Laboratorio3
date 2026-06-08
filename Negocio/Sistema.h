//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_SISTEMA_H
#define LAB_2_SISTEMA_H
#include "ISistema.h"
using namespace std;

#include <set>


class Sistema : public ISistema {

private:
    Sistema();
    static Sistema* instancia;

public:
    virtual ~Sistema();
    static Sistema* getInstancia();

    set<Usuario*> listaUsuarios;
    set<Inmueble*> listaInmuebles;

    //AltaImueble
    set<DTPropietario*> obtenerPropietarios();
    //void seleccionarPropietario(DTPropietario* propietario);
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
