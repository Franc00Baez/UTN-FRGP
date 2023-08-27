#include <iostream>
using namespace std;
#include "reunion.h"
#include "funciones.h"

const int TAM = 7;

int main(){
    
    Reunion r[TAM];

    readVector(r, TAM);
    std::cout << std::endl;
    system("PAUSE");
    system("CLS");
    showVector(r, TAM);
    system("PAUSE");
    system("CLS");
    puntoA(r, TAM);
    system("PAUSE");
    system("CLS");
    puntoB(r, TAM);
    system("PAUSE");
    system("CLS");
    puntoC(r, TAM);

 
    return 0;
    
}


