/** @brief manda a llamar a la funcion "porcentaje" que calcula el porcentaje de un numero 
 *  @param op1 equivale a el valor de x en procentaje
 *  @param op2 equivale a el valor de y en porcentaje
 *  @return 0
 */
#include <stdlib.h>
#include <stdio.h>
#include "../src/porcentaje.c"

int main(int argc, char const *argv[])
{
    double op1 = atoi(argv[1]);
    double op2 = atoi(argv[2]);
    printf ( " %lf ", porcentaje(op1,op2));
    return 0;
    
}