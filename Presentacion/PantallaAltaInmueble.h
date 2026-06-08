//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_PANTALLAALTAINMUEBLE_H
#define LAB_2_PANTALLAALTAINMUEBLE_H
#include "../Negocio/ISistema.h"


class PantallaAltaInmueble {
private:
    ISistema* sistema;
    DTPropietario* seleccionarPropietario(set<DTPropietario*> propietarios);
    DTInmueble* ingresoDatosInmueble();
public:
    PantallaAltaInmueble();
    void mostrarPantallaAltaInmueble();
};



#endif //LAB_2_PANTALLAALTAINMUEBLE_H
