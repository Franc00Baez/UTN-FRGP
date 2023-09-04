#include "ingreso.h"

Ingreso::Ingreso() : Transaccion()
{}

Ingreso::Ingreso(int id_transaccion, const std::string &descripcion, int id_categoria, int tipo_ingreso, const std::string &referencia_externa, float importe)
: Transaccion(id_transaccion, id_categoria, descripcion, importe), _tipo_ingreso(tipo_ingreso), _referencia_externa(referencia_externa)
{}

void Ingreso::setTipoingreso(int tipo_ingreso)
{
    _tipo_ingreso = tipo_ingreso;
}

void Ingreso::setReferenciaexterna(const std::string &referencia_externa)
{
    _referencia_externa = referencia_externa;
}

int Ingreso::getTipoingreso() const
{
    return _tipo_ingreso;
}

std::string Ingreso::getReferenciaexterna() const
{
    return _referencia_externa;
}

std::string Ingreso::toString() const
{
    std::string cad;

    cad = Transaccion::toString() + ", " + std::to_string(_tipo_ingreso) + ", " + _referencia_externa;

    return cad;
}
