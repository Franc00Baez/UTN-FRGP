#pragma once
#include "direccion.h"
#include "fecha.h"

class Inmuebles
{
    public:
    Inmuebles();
    Inmuebles(Direccion _dir, Fecha _ingreso, Fecha _operacion, float _superficie_total, int _tipo_operacion);

    void setDireccion(Direccion _dir);
    void setIngreso(Fecha _ingreso);
    void setOperacion(Fecha _operacion);
    void setSuperficieTotal(int _superficie_total);
    void setTipoOperacion(int _tipo_operacion);

    Direccion getDireccion();
    Fecha getIngreso();
    Fecha getOperacion();
    float getSuperficieTotal();
    int getTipoOperacion();


    protected:
    Direccion _dir;
    Fecha _ingreso, _operacion;
    float _superficie_total;
    int _tipo_operacion;



};