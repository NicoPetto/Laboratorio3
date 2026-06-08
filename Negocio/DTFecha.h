//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTFECHA_H
#define LAB_2_DTFECHA_H



class DTFecha {
private:
    int anio;
    int mes;
    int dia;
public:
    DTFecha();
    DTFecha(int anio, int mes, int dia);
    int getAnio();
    int getMes();
    int getDia();
    void setAnio(int anio);
    void setMes(int mes);
    void setDia(int dia);
};



#endif //LAB_2_DTFECHA_H
