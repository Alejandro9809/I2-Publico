#include <stdint.h>
#include <stdio.h>
#include "../include/funcionesNum.h"

/** @brief Recibe un numero entero y duelve su factorial
 *  @param x Valor de entrada
 *  @returns x! (double)
 */
double factorial(int x){
    double r=1.0;
    
    for(int c=1;c<=x;c++){
        r*=c; 
    }
    return r;
}