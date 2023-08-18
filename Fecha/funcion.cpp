/**
 * Funcion protected de la clase fecha, calcula la cantidad de dias que tiene que haber segun el mes y el año,
 * teniendo encuenta año bisiesto.
 * @param int m = MES
 * @param int a = AÑO
*/
int Fecha::dias_en_mes(int m, int a)
{
    int cantDias = 31; //Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre. 

    if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        cantDias = 30; //Abril, Junio, Septiembre, Noviembre.
    } else if(m == 2)
    {
        if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            cantDias = 29; //Febrero año bisiesto.
        }else
        {
            cantDias = 28; //Febrero año no bisiestos.
        }
    }

    return cantDias;
}