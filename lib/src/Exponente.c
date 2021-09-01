/** @brief Funcion que eleva un numero elevado a un exponente
 * @param x  Primer parametro
 * @param y Segundo parametro
 * @returns x
*/
#include "../include/funcionesNum.h"

double Exponencial (double x, double y){
    int z = x;
    for (int cont = 1; cont < y; cont++){
        x = x * z;
    }
    return x;
}