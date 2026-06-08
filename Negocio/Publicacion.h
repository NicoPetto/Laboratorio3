//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_PUBLICACION_H
#define LAB_2_PUBLICACION_H

#include "DTTipoPublicacion.h"
#include <iostream>
using namespace std;

class Publicacion {
private:
    int codigo;
    DTTipoPublicacion tipoPublicacion;
    string texto;
    int precio;
public:
    Publicacion();
    Publicacion(int codigo, DTTipoPublicacion tipoPublicacion, string texto, int precio);
    DTTipoPublicacion getTipoPublicacion();
    int getCodigo();
    string getTexto();
    int getPrecio();
    void setTipoPublicacion(DTTipoPublicacion tipoPublicacion);
    void setCodigo(int codigo);
    void setTexto(string texto);
    void setPrecio(int precio);
};



#endif //LAB_2_PUBLICACION_H
