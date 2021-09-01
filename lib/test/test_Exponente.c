#include <stdio.h>   //se incluyen bibliotecas para de entrada y salida estandar y gestion de memoria dinámica
#include <stdlib.h>
#include "../src/Exponente.c"  //incluye la ruta relaitiva de Exponencial.c a modo de  "simular una biblioteca"


int main(int argc, char const *argv[]){
    
    double op1 = atoi(argv[1]);   //pedimos memoria dinámica para los parametros que se utilzarán posteriormenete
    double op2 = atoi(argv[2]);
    printf("%.f ", Exponencial(op1, op2)); //Invocamos la función que incluye el archivo .c incluido.

    return 0;
}