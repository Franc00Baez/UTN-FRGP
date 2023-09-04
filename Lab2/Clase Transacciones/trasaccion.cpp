#include "transaccion.h"

Transaccion::Transaccion()
{
    _id_transaccion = 0;
    _id_categoria = 0;
    _descripcion = " ";
    _importe = 0;
    _estado = true;
}

Transaccion::Transaccion(int id_transaccion, int id_categoria, const std::string &descripcion, float importe)
{
    _id_transaccion = id_transaccion;
    _id_categoria = id_categoria;
    _descripcion = descripcion;
    _importe = importe;
    _estado = true;
}

void Transaccion::setIDTransaccion(int id_transaccion)
{
    _id_transaccion = id_transaccion;
}

void Transaccion::setIDCategoria(int id_categoria)
{
    _id_categoria = id_categoria;
}

void Transaccion::setDescripcion(const std::string &descripcion)
{
    _descripcion = descripcion;
}

void Transaccion::setIngreso(const Fecha &ingreso)
{
    _ingreso = ingreso;
}

void Transaccion::setImporte(float importe)
{
    _importe = importe;
}

void Transaccion::setEstado(bool estado)
{
    _estado = estado;
}

int Transaccion::getIDTransaccion() const
{
    return _id_transaccion;
}

int Transaccion::getIDCategoria() const
{
    return _id_categoria;
}

std::string Transaccion::getDescripcion() const
{
    return _descripcion;
}

Fecha Transaccion::getIngreso() const
{
    return _ingreso;
}

float Transaccion::getImporte() const
{
    return _importe;
}

bool Transaccion::getEstado() const
{
    return _estado;
}

std::string Transaccion::toString() const
{
    std::string cad;

    cad = std::to_string(_id_transaccion) + ", " + std::to_string(_id_categoria) + ", " + _descripcion + ", " + _ingreso.toString() + ", $" + std::to_string(_importe);
    
    return cad;
}
