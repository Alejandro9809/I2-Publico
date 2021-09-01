#include <stdio.h>
#include <stdlib.h>
#include "../include/funcionesNum.h"

int main(int argc, char const *argv[]){
    int x= atoi(argv[1]);
    int y= atoi(argv[2]);
    printf("Exponencial %d^%d = %.f\n",x,y,Exponencial(x,y));
    printf("Factorial %d = %.f\n",x,factorial(x));
    printf("Porcentaje %d * %d%% = %f\n",x,y,porcentaje(x,y));
    if(es_primo(x)){
        printf("%d es primo\n",x);
    }
    else{
        printf("%d no es primo\n",x);
    }
    return 0;
}