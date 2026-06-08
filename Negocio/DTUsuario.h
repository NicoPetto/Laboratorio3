//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTUSUARIO_H
#define LAB_2_DTUSUARIO_H

#include <iostream>
using namespace std;


class DTUsuario {
protected:
    string nickname;
    string password;
    string nombre;
    string email;
public:
    DTUsuario();
    DTUsuario(string nickname, string password, string nombre, string email);
    virtual ~DTUsuario();
    void setNickname(string nickname);
    void setPassword(string password);
    void setNombre(string nombre);
    void setEmail(string email);
    string getNickname();
    string getPassword();
    string getNombre();
    string getEmail();

};



#endif //LAB_2_DTUSUARIO_H
