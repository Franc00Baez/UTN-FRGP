#include <iostream>
#include "sistema.h"


void Sistema::cargarTransacciones()
{
    _gasto[0] = Gasto(1, 3, 1, "Comida", "Pedidos Ya", 3500);
    _gasto[1] = Gasto(2, 3, 1, "Folleteria", "Libreria Cani", 10000);
    _gasto[2] = Gasto(3, 2, 4, "Comida", "Pedidos Ya", 2560);
    _gasto[3] = Gasto(4, 3, 3, "Comida", "Rotiseria Juan Cruz", 5403);
    _gasto[4] = Gasto(5, 2, 5, "Regalos Empresariales", "Gucci", 40305);

    _ingreso[0] = Ingreso(1, "Venta Reloj", 2, 3, "Asmatic", 35000);
    _ingreso[1] = Ingreso(2, "Venta Polera", 3, 1, "Vera", 23000);
    _ingreso[2] = Ingreso(3, "Venta Gorra", 2, 3, "Vera", 9500);
    _ingreso[3] = Ingreso(4, "Venta Correa", 2, 3, "Asmatic", 900);
    _ingreso[4] = Ingreso(5, "Venta Reloj", 2, 3, "Osiris Gold", 55500);
}

void Sistema::mostrarGastos()
{
    std::cout << "GASTOS: \n";
    for(int i = 0; i < 5; i++)
    {
        std::cout << _gasto[i].toString() << "\n";
    }
}

void Sistema::mostrarIngreso()
{
    std::cout << "INGRESO: \n";
    for(int i = 0; i < 5; i++)
    {
        std::cout << _ingreso[i].toString() << "\n";
    }
}

int Sistema::mostrarMayoringreso() const
{
    float max = 0, pos;

    for(int i = 0; i < 5; i++)
    {
        if(_ingreso[i].getImporte() >= max)
        {
            max = _ingreso[i].getImporte();
            pos = i;
        }
    }

    return pos;
}

float Sistema::mostrarSaldo() const
{
    float saldo = 0;
    for(int i = 0; i < 5; i++)
    {
       saldo += _ingreso[i].getImporte();
       saldo -= _gasto[i].getImporte();
    }

    return saldo;
}

void Sistema::Menu()
{
    bool b=true;
    int opc;

    while(b == true)
    {
        system("cls");
        std::cout << "*************MENU*************\n";
        std::cout << "*1.Cargar Transacciones      *\n";
        std::cout << "*2.Mostrar Ingresos          *\n";
        std::cout << "*3.Mostrar Gastos            *\n";
        std::cout << "*4.Mostrar Mayor Ingreso     *\n";
        std::cout << "*5.Mostrar Saldo             *\n";
        std::cout << "*0.Salir                     *\n";
        std::cout << "Ingrese opcion: "; std::cin >> opc;
        system("cls");

        switch (opc)
        {
        case 1:
            cargarTransacciones();
            break;
        case 2:
            mostrarIngreso();
            system("Pause");
             break;
        case 3:
            mostrarGastos(); 
            system("pause");
            break;
        case 4: 
            std::cout << _ingreso[mostrarMayoringreso()].toString() << std::endl;
            system("pause");
            break;
        case 5: 
            std::cout << "Saldo Actual: " << mostrarSaldo() << std::endl;
            system("pause");
            break;
        case 0: 
            b = false;
            break;
        default:
            std::cout << "Error, elija una opcion correcta (0 - 5)";
            break;
        } 
    }
}   
