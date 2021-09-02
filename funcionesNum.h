/** La biblioteca contiene distintas funciones relacionadas con números
 * operaciones como sacar porcentaje, factorial, exponencial y determinar si un número es primo.
 * Author: Lider->> Alejandro Chávez Flores 2203024955
 *         Colaboradores ->> Santiago Arturo Hernández Dominguez  2163071656
 *                           Rodrigo García Núñez  2203025158
 *                           Alan Yair Cortes López  2203066542
 *                           Rodolfo André Ortega García 2203066275
 */

#include <stdint.h>
#include <stdbool.h>


/** @brief Funcion que eleva un numero elevado a un exponente
 * @param x  Primer parametro
 * @param y Segundo parametro
 * @returns x
*/
double Exponencial (double x, double y);

/** @brief Recibe un numero entero y duelve su factorial
 *  @param x Valor de entrada
 *  @returns x! (double)
 */
double factorial(int x);

/** @brief calcula el porcentaje de un numero 
 *  @param x es la cantidad
 *  @param y el porcentaje que desea obtener
 *  @param por es el porcentaje obtenido
 *  @returns por 
 */
double porcentaje(double x, double y);

/** @brief  Recibe un numero y devuelve si es primo o no 
* @param    number primer numero
* @returns   bool flag_return si es primo o no  
*/
bool es_primo(int number);