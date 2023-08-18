#pragma once
#include <string>
//HOLA

class Fecha
{
    public:
    Fecha(int d, int m, int a);
    Fecha();

    void agregarDias(int dias);
    std::string to_string();

    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    int getDia();
    int getMes();
    int getAnio();
    
    protected:
    const int ANIO_DEFAULT = 2023;
    int _dia;
    int _mes;
    int _anio;
    
    int dias_en_mes(int m, int a);
    void agregarDia();
    void restarDia();
    
};