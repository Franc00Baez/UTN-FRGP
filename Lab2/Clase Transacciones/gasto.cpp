#include "gasto.h"

Gasto::Gasto() : Transaccion()
{
}

Gasto::Gasto(int id_transaccion, int id_categoria, int id_metodo_pago, const std::string &descripcion, const std::string &establecimiento, float importe)
 : Transaccion(id_transaccion, id_categoria, descripcion, importe), _id_metodo_pago(id_metodo_pago), _establecimiento(establecimiento)
{
}

void Gasto::setIDMetodopago(int id_metodo_pago) 
{
    _id_metodo_pago = id_metodo_pago;
}

void Gasto::setEstablecimiento(const std::string &establecimiento)
{
    _establecimiento = establecimiento;
}

int Gasto::getIDMetodopago() const
{
    return _id_metodo_pago;
}

std::string Gasto::getEstablecimiento() const
{
    return _establecimiento;
}

std::string Gasto::toString() const
{
    std::string cad;

    cad = Transaccion::toString() + ", " + std::to_string(_id_metodo_pago) + ", " + _establecimiento;

    return cad;
}
