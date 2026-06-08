//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_CLIENTE_H
#define LAB_2_CLIENTE_H

#include "Usuario.h"


class Cliente : public Usuario {
private:
    string apellido;
    string documento;
public:
    Cliente();
    Cliente(string apellido, string documento);
    string getApellido();
    string getDocumento();
};



#endif //LAB_2_CLIENTE_H
