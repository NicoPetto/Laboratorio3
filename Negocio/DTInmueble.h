//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTINMUEBLE_H
#define LAB_2_DTINMUEBLE_H
#include <string>

using namespace std;


class DTInmueble {
protected:
    int codigo;
    string direccion;
    int numeroPuerta;
    int superficie;
    int AnioConstruccion;

public:
    DTInmueble();
    DTInmueble(int codigo, string direccion, int numeroPuerta, int superficie, int AnioConstruccion);
    virtual ~DTInmueble();
    int getCodigo();
    string getDireccion();
    int getNumeroPuerta();
    int getSuperficie();
    int getAnioConstruccion();
    void setCodigo(int codigo);
    void setDireccion(string direccion);
    void setNumeroPuerta(int numeroPuerta);
    void setSuperficie(int superficie);
    void setAnioConstruccion(int AnioConstruccion);

};



#endif //LAB_2_DTINMUEBLE_H
