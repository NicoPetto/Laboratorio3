//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_INMUEBLE_H
#define LAB_2_INMUEBLE_H
#include <string>

using namespace std;


class Inmueble {
protected:
    int codigo;
    string direccion;
    int numeroPuerta;
    int superficie;
    int AnioConstruccion;

public:
    Inmueble();
    Inmueble(int codigo, string direccion, int numeroPuerta, int superficie, int AnioConstruccion);
    virtual ~Inmueble();
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



#endif //LAB_2_INMUEBLE_H
