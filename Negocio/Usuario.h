//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_USUARIO_H
#define LAB_2_USUARIO_H

#include <iostream>
using namespace std;


class Usuario {
protected:
    string nickname;
    string password;
    string nombre;
    string email;
public:
    Usuario();
    Usuario(string nickname, string password, string nombre, string email);
    virtual ~Usuario();
    void setNickname(string nickname);
    void setPassword(string password);
    void setNombre(string nombre);
    void setEmail(string email);
    string getNickname();
    string getPassword();
    string getNombre();
    string getEmail();

};



#endif //LAB_2_USUARIO_H
