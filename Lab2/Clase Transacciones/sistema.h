#pragma once
#include "gasto.h"
#include "ingreso.h"

class Sistema 
{
    public:
    void cargarTransacciones();
    void mostrarGastos();
    void mostrarIngreso();
    int mostrarMayoringreso() const;
    float mostrarSaldo() const; 
    void Menu();

    private:
    Gasto _gasto[5];
    Ingreso _ingreso[5];
};