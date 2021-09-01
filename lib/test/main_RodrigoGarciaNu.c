#include <stdio.h>
#include <stdlib.h>
#include "../include/funcionesNum.h"

int main(int argc, char const *argv[]){

    double op1 = atoi(argv[1]);   //pedimos memoria dinámica para los parametros que se utilzarán posteriormenete
    double op2 = atoi(argv[2]);   //en las funciones
    double z;
    z = Exponencial(op1, op2);
    printf("%.f \n", z);

    z = factorial(op1);
    printf("%.f \n", z);

    z = porcentaje(op1, op2);
    printf("%.f \n", z);

    if(es_primo(op1)){
        printf("%.f es primo\n", op1);
    }
    else{
        printf("%.f no es primo\n", op1);
    }

    return 0;
}

