#pragma once
#include "inmuebles.h"

class Casa : public Inmuebles
{
    public:
    Casa();
    Casa(int _ambientes, float _superficie_construida);

    void setAmbientes(int _ambiente);
    void setSuperficieConstruida(float _superficie_construida);

    private:
    int _ambientes;
    float _superficie_construida;
}