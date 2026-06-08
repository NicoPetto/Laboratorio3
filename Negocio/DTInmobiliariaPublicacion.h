//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTINMOBILIARIAPUBLICACION_H
#define LAB_2_DTINMOBILIARIAPUBLICACION_H

#include <iostream>
using namespace std;

#include "DTFecha.h"



class DTInmobiliariaPublicacion {
private:
    int codigo;
    DTFecha fechaAdm;
    string texto;
    string nombre;
    int precio;
public:
    DTInmobiliariaPublicacion();
    DTInmobiliariaPublicacion(int codigo, DTFecha fechaAdm, string texto, string nombre, int precio);
    int getCodigo();
    DTFecha getFechaAdm();
    string getTexto();
    string getNombre();
    int getPrecio();
};



#endif //LAB_2_DTINMOBILIARIAPUBLICACION_H
