#pragma once
#include "fecha.h"

class Transaccion
{
    public:
    Transaccion();
    Transaccion(int id_transaccion, int id_categoria, const std::string &descripcion, float importe);

    void setIDTransaccion(int id_transaccion);
    void setIDCategoria(int id_categoria);
    void setDescripcion(const std::string &descripcion);
    void setIngreso(const Fecha &ingreso);
    void setImporte(float importe);    
    void setEstado(bool estado);

    int getIDTransaccion() const;
    int getIDCategoria() const;
    std::string getDescripcion() const;
    Fecha getIngreso() const;
    float getImporte() const;
    bool getEstado() const;

    std::string toString() const;

    private:
    int _id_transaccion, _id_categoria;
    std::string _descripcion;
    Fecha _ingreso;
    float _importe;
    bool _estado;

};
