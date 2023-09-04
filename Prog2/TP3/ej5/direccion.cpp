#include "direccion.h"

Direccion::Direccion()
{
    _calle = " ";
    _localidad = " ";
    _piso = " ";
    _numero = 0;
    _cp = 0;
}

Direccion::Direccion(std::string _calle, int _numero, int _cp, std::string _localidad, std::string _piso)
{
    this -> _calle = _calle;
    this -> _numero = _numero;
    this -> _cp = _cp;
    this -> _localidad = _localidad;
    this -> _piso = _piso;
}

void Direccion::setCalle(std::string _calle)
{
    this -> _calle = _calle;
}

void Direccion::setNumero(int _numero)
{
    this -> _numero = _numero;
}

void Direccion::setCP(int _cp)
{
    this -> _cp = _cp;
}

void Direccion::setLocalidad(std::string _localidad)
{
    this -> _localidad = _localidad;
}

void Direccion::setPiso(std::string _piso)
{
    this -> _piso = _piso;
}

std::string Direccion::getCalle()
{
    return _calle;
}

std::string Direccion::getLocalidad()
{
    return _localidad;
}

std::string Direccion::getPiso()
{
    return _piso;
}

int Direccion::getNumero()
{
    return _numero;
}

int Direccion::getCp()
{
    return _cp;
}

std::string Direccion::toString()
{
    std::string cad;

    cad = _calle + " " + std::to_string(_numero) + " " + _piso + ", ";
    cad += _localidad + " (" + std::to_string(_cp) + ").";

    return cad;

}