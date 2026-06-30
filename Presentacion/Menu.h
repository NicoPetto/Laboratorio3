//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_MENU_H
#define LAB_2_MENU_H
#include "../Negocio/ISistema.h"

class Menu {
 private:
    ISistema* sistema;
public:
    Menu();
    void menuPrincipal();
};

#endif //LAB_2_MENU_H
