//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_APARTAMENTO_H
#define LAB_2_APARTAMENTO_H

#include "Inmueble.h"



class Apartamento : public Inmueble {
private:
    int numeroPiso;
    bool ascensor;
    int gastosComunes;

public:
    Apartamento();
    Apartamento(int numeroPiso, bool ascensor, int gastosComunes);
    int getNumeroPiso();
    bool getAscensor();
    int getGastosComunes();
};



#endif //LAB_2_APARTAMENTO_H
