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
    map <string, Usuario*> usuariosSistema;
public:
    virtual ~Sistema();
    static Sistema* getInstancia();
    set<Inmobiliaria*> inmobiliariasSistema;
    set<Inmueble*> inmueblesSistema;
    set<DTInmuebleAdministrado *> inmueblesAdministradosSistema;

    //AltaUsuario
    void altaUsuario(DTUsuario *usuario);

    //VerUsuarios
    set<DTUsuario*> obtenerInfoUsuarios(int tipoUsuario);
    DTUsuario* obtenerInfoCompletaUsuario(string email);

    //AltaImueble
    set<DTPropietario*> obtenerPropietarios();
    set<Inmueble*> obtenerInmueblesPropietario(string nickname);
    int registroInmueble(DTInmueble* inmueble, DTPropietario* propietario);
    int finalizarAltaInmueble();

    //RepresentarPropietario
    //set<DTInmobiliaria*> obtenerInmobiliarias();
    set<DTPropietario*> obtenerPropietariosNoRepresentados(string mailInm);
    void representar(string mailInmo, string mailProp);

    //VerRepresentados
    //set<DTInmobiliaria*> obtenerInmobiliarias();
    set<DTPropietario*> obtenerPropietariosRepresentados(string mailInm);

    //AltaPublicacion
    set<DTInmobiliaria*> obtenerInmobiliarias();
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
