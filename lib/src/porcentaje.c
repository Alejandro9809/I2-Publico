/** @brief calcula el porcentaje de un numero 
 *  @param x es la cantidad
 *  @param y el porcentaje que desea obtener
 *  @param por es el porcentaje obtenido
 *  @returns por 
 */

#include <stdlib.h>
#include "../include/funcionesNum.h"


double porcentaje(double x, double y){
    double por;
    por= x*(((double)y)/((double)100));
    return por;

}