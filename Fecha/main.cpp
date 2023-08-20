#include <iostream> 
#include "fecha.h"

int main()
{
    Fecha p1(1, 3, 2023);

    std::cout<<p1.to_string()<<std::endl;

    p1.agregarDias(-1);

    std::cout<<p1.to_string()<<std::endl;
    
    
    system("PAUSE");
    
} 

//cd "c:\Users\Franco\FACULTAD\Github\Fecha\" ; if ($?) { g++ *.cpp -o main } ; if ($?) { .\main }