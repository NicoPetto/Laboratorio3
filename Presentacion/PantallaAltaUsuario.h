//
// Created by Nicolás on 20/6/2026.
//

#ifndef LAB_3_PANTALLAALTAUSUARIO_H
#define LAB_3_PANTALLAALTAUSUARIO_H
#include "../Negocio/ISistema.h"



class PantallaAltaUsuario {
private:
    ISistema* sistema;
    DTUsuario* ingresoDatosUsuario();
public:
    PantallaAltaUsuario();
    void mostrarPantallaAltaUsuario();

};



#endif //LAB_3_PANTALLAALTAUSUARIO_H
