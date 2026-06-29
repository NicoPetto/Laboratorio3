//
// Created by Nicolás on 28/6/2026.
//

#ifndef LAB_3_PANTALLAADMINISTRARPROPIEDAD_H
#define LAB_3_PANTALLAADMINISTRARPROPIEDAD_H
#include "../Negocio/ISistema.h"



class PantallaAdministrarPropiedad {

private:
    ISistema* sistema;
    DTInmobiliaria* seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias);
    DTInmueble* seleccionarInmueble(set<DTInmueble*> inmuebles);
public:
    PantallaAdministrarPropiedad();
    void mostrarPantallaAdministrarPropiedad();

};



#endif //LAB_3_PANTALLAADMINISTRARPROPIEDAD_H
