//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTAPARTAMENTO_H
#define LAB_2_DTAPARTAMENTO_H

#include "DTInmueble.h"



class DTApartamento : public DTInmueble {
private:
    int numeroPiso;
    bool ascensor;
    int gastosComunes;

public:
    DTApartamento();
    DTApartamento(int numeroPiso, bool ascensor, int gastosComunes);
    int getNumeroPiso();
    bool getAscensor();
    int getGastosComunes();
};



#endif //LAB_2_DTAPARTAMENTO_H
