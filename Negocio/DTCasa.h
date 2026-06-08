//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTCASA_H
#define LAB_2_DTCASA_H

#include "DTInmueble.h"
#include "DTTipoTecho.h"


class DTCasa : public DTInmueble {
private:
    bool pH;
    DTTipoTecho tipoTecho;

public:
    DTCasa();
    DTCasa(bool pH, DTTipoTecho tipoTecho);
    bool getPH();
    DTTipoTecho getTipoTecho();

};



#endif //LAB_2_DTCASA_H
