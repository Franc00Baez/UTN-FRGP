#include "inmuebles.h"

Inmuebles::Inmuebles()
{
    _superficie_total = 0;
    _tipo_operacion = 0;
}

Inmuebles::Inmuebles(Direccion _dir, Fecha _ingreso, Fecha _operacion, float _superficie_total, int _tipo_operacion)
{
    this -> _dir = _dir;
    this -> _ingreso = _ingreso;
    this -> _operacion = _operacion;
    this -> _superficie_total = _superficie_total;
    this -> _tipo_operacion = _tipo_operacion;
}

void Inmuebles::setDireccion(Direccion _dir)
{
    this -> _dir = _dir;
}

void Inmuebles::setIngreso(Fecha _ingreso)
{
    this -> _ingreso = _ingreso;
}

void Inmuebles::setOperacion(Fecha _operacion)
{
    this -> _operacion = _operacion;
}

void Inmuebles::setSuperficieTotal(int _superficie_total)
{
    this -> _superficie_total = _superficie_total;
}

void Inmuebles::setTipoOperacion(int _tipo_operacion)
{
    this -> _tipo_operacion = _tipo_operacion;
}

Direccion Inmuebles::getDireccion()
{
    return _dir;
}

Fecha Inmuebles::getIngreso()
{
    return _ingreso;
}

Fecha Inmuebles::getOperacion()
{
    return _operacion;
}

float Inmuebles::getSuperficieTotal()
{
    return _superficie_total;
}

int Inmuebles::getTipoOperacion()
{
    return _tipo_operacion;
}
