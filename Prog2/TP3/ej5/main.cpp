#include "direccion.h"
#include <iostream>

int main()
{
    Direccion dir("Pocitos", 3064, 1646, "San Fernando", "");

    std::cout << dir.toString();
    
    return 0;
}