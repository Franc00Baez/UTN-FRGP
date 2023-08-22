#include <iostream> 
#include "fecha.h"

int main()
{
    Fecha p1;
    std::cout<<p1.to_string()<<std::endl;

    std::cout<<p1.getNombreDia()<<std::endl;
    
    
    system("PAUSE");
    
} 

//cd "c:\Users\Franco\FACULTAD\Github\Fecha\" ; if ($?) { g++ *.cpp -o main } ; if ($?) { .\main }