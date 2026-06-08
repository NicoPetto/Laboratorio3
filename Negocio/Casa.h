//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_CASA_H
#define LAB_2_CASA_H

#include "Inmueble.h"
#include "DTTipoTecho.h"


class Casa : public Inmueble {
private:
    bool pH;
    DTTipoTecho tipoTecho;

public:
    Casa();
    Casa(bool pH, DTTipoTecho tipoTecho);
    bool getPH();
    DTTipoTecho getTipoTecho();

};



#endif //LAB_2_CASA_H
