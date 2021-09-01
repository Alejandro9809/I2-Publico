#include <stdbool.h>
#include "../include/funcionesNum.h"

/** @brief  Recibe un numero y devuelve si es primo o no 
* @param    number primer numero
* @returns   bool flag_return si es primo o no  
*/


bool es_primo(int number)
{
    bool flag_return = true;
    if(number < 2){
        flag_return = false;
    }else if(number == 2){
        flag_return = true;
    }else{ /* number>2 */
        for(int i=2; i<number; i++){
            if((number%i)==0){
                flag_return = false;
                break;
            }
        } 
    }
    return flag_return;
}

