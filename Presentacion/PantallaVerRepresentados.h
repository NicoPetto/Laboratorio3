//
// Created by Nicolás on 27/6/2026.
//

#ifndef LAB_3_PANTALLAVERREPRESENTADOS_H
#define LAB_3_PANTALLAVERREPRESENTADOS_H
#include "../Negocio/ISistema.h"

class PantallaVerRepresentados {
private:
    ISistema* sistema;
    DTInmobiliaria * seleccionarInmobiliaria(set<DTInmobiliaria*> inmobiliarias);
public:
    PantallaVerRepresentados();
    void mostrarPantallaVerRepresentados();

};



#endif //LAB_3_PANTALLAVERREPRESENTADOS_H
