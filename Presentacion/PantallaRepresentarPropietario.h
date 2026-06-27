//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_PANTALLAREPRESENTARPROPIETARIO_H
#define LAB_2_PANTALLAREPRESENTARPROPIETARIO_H
#include "../Negocio/ISistema.h"


class PantallaRepresentarPropietario {
private:
    ISistema* sistema;
    DTInmobiliaria * seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias);
    DTPropietario* seleccionarPropietarioARepresentar(set<DTPropietario*> propietarios);
public:
    PantallaRepresentarPropietario();
    void mostrarPantallaRepresentarPropietario();
};



#endif //LAB_2_PANTALLAREPRESENTARPROPIETARIO_H
