//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_PANTALLAALTAPUBLICACION_H
#define LAB_2_PANTALLAALTAPUBLICACION_H
#include "../Negocio/ISistema.h"



class PantallaAltaPublicacion {
private:
    ISistema* sistema;
    DTInmobiliaria * seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias);
    DTInmuebleAdministrado * seleccionarInmuebleAdministrado(set<DTInmuebleAdministrado*> inmueblesAdministrados);
public:
    PantallaAltaPublicacion();
    void mostrarPantallaAltaPublicacion();
};



#endif //LAB_2_PANTALLAALTAPUBLICACION_H
