#include <stdio.h>
#include <stdlib.h>
#include "../include/funcionesNum.h"

int main(int argc, char const *argv[]){

    double op1 = atoi(argv[1]);   //pedimos memoria dinámica para los parametros que se utilzarán posteriormenete
    double op2 = atoi(argv[2]);   //en las funciones
    double z = 5;
    z = Exponencial(op1, op2);
    printf("holaaa %.f", z);

    return 0;
}

