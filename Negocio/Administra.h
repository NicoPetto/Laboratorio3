//
// Created by Nicolás on 9/6/2026.
//

#ifndef LAB_3_ADMINISTRA_H
#define LAB_3_ADMINISTRA_H

#include <set>

#include "DTFecha.h"
#include "Inmobiliaria.h"
#include "Inmueble.h"

class Inmobiliaria;
class Inmueble;

class Administra {
private:
    DTFecha * fecha;
    Inmobiliaria* inmobiliariaAdministra;
    Inmueble* inmuebleAdministra;
public:
    Administra();
    Administra(DTFecha * fecha, Inmobiliaria* inmobiliaria);
    void setInmobiliaria(Inmobiliaria* inmobiliaria);
    Inmobiliaria* getInmobiliariaAdministra();
    Inmueble* getInmuebleAdministra();
    DTInmuebleAdministrado* obtenerAdministracion();

};



#endif //LAB_3_ADMINISTRA_H
