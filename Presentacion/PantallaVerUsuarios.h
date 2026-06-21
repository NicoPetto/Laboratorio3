//
// Created by Nicolás on 21/6/2026.
//

#ifndef LAB_3_PANTALLAVERUSUARIOS_H
#define LAB_3_PANTALLAVERUSUARIOS_H
#include "../Negocio/ISistema.h"


class PantallaVerUsuarios {
    private:
    ISistema* sistema;
    public:
    PantallaVerUsuarios();
    void mostrarPantallaVerUsuarios();
};



#endif //LAB_3_PANTALLAVERUSUARIOS_H
