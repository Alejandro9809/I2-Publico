#include <stdlib.h>
#include <stdio.h>
#include "../include/funcionesNum.h"

int main(int argc, char const *argv[])
{   
    double op1 = atoi(argv[1]);
    double op2 = atoi(argv[2]);
    double z;
    
    z=porcentaje(op1, op2);
    printf ( " %lf\n ", z);

    z=Exponencial(op1, op2);
    printf("%.f \n", z); 
    
    z=factorial(op1);
    printf("%.f\n",z);

    if(es_primo(op1)){
        printf("es primo\n");
    }else{
        printf("no es primo\n");
    }
    return 0;
    
}