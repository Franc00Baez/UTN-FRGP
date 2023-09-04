#include "funciones.h"

const int TAM = 2;

int main()
{
    Empleado e[TAM];

    cargarVector(e, TAM);
    std::cout << std::endl;
    system("pause");
    system("cls");
    mostrarVector(e, TAM);

    return 0;
}