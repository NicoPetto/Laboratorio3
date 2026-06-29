//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_INMUEBLE_H
#define LAB_2_INMUEBLE_H
#include <string>

#include "Administra.h"
#include "DTInmuebleAdministrado.h"
#include "Propietario.h"

using namespace std;

class Administra;
class Propietario;
class DTInmuebleAdministrado;
class DTInmueble;


class Inmueble {
protected:
    int codigo;
    string direccion;
    int numeroPuerta;
    int superficie;
    int AnioConstruccion;
    set<Administra*>  listaAdministraciones;
    Propietario * propietario;

public:
    Inmueble();
    Inmueble(int codigo, string direccion, int numeroPuerta, int superficie, int AnioConstruccion);
    virtual ~Inmueble();
    int getCodigo();
    string getDireccion();
    int getNumeroPuerta();
    int getSuperficie();
    int getAnioConstruccion();
    Propietario * getPropietario();
    void setPropietario(Propietario* propietario);
    set<Administra*>  getAdministraciones();
    void setCodigo(int codigo);
    void setDireccion(string direccion);
    void setNumeroPuerta(int numeroPuerta);
    void setSuperficie(int superficie);
    void setAnioConstruccion(int AnioConstruccion);
    DTInmuebleAdministrado * creoDTInmuebleAdministrado();
    DTInmueble* creoDTInmueble();

};



#endif //LAB_2_INMUEBLE_H
