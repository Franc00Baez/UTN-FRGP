#pragma once
#include "transaccion.h"

class Gasto : public Transaccion
{
    public:
    Gasto();
    Gasto(int id_transaccion, int id_categoria, int id_metodo_pago, const std::string &descripcion, const std::string &establecimiento, float importe);

    void setIDMetodopago(int id_metodo_pago);
    void setEstablecimiento(const std::string &establecimiento);

    int getIDMetodopago() const;
    std::string getEstablecimiento() const;

    std::string toString() const;

    private:
    int _id_metodo_pago;
    std::string _establecimiento;

};
