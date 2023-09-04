#pragma once
#include "transaccion.h"

class Ingreso : public Transaccion
{
    public:
    Ingreso();
    Ingreso(int id_transaccion, const std::string &descripcion, int id_categoria, int tipo_ingreso, const std::string &referencia_externa, float importe);

    void setTipoingreso(int tipo_ingreso);
    void setReferenciaexterna(const std::string &referencia_externa);

    int getTipoingreso() const;
    std::string getReferenciaexterna() const;

    std::string toString() const;

    private:
    int _tipo_ingreso;
    std::string _referencia_externa;
};