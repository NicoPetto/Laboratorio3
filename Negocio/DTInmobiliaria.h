//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTINMOBILIARIA_H
#define LAB_2_DTINMOBILIARIA_H
#include "DTUsuario.h"


class DTInmobiliaria : public DTUsuario {
private:
    string direccion;
    string URL;
    string telefono;
public:
    DTInmobiliaria();
    DTInmobiliaria(string direccion, string URL, string telefono);
    string getDireccion();
    string getURL();
    string getTelefono();
};



#endif //LAB_2_DTINMOBILIARIA_H
