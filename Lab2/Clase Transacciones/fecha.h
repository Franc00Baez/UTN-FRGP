#pragma once
#include <string>

class Fecha{
    public:
        int getDia() const;
        int getMes() const;
        int getAnio() const;
        std::string getNombreDia() const;
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        Fecha();
        Fecha(int dia, int mes, int anio);
        std::string toString() const;

    private:
        int _dia, _mes, _anio;
        int _diaSemana;
};