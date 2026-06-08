//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTCLIENTE_H
#define LAB_2_DTCLIENTE_H

#include "DTUsuario.h"


class DTCliente : public DTUsuario {
private:
    string apellido;
    string documento;
public:
    DTCliente();
    DTCliente(string apellido, string documento);
    string getApellido();
    string getDocumento();
};



#endif //LAB_2_DTCLIENTE_H
