#include <stdlib.h>
#include <stdio.h>
#include "../src/primo.c"

int main(int argc, char const *argv[]){
    int number = atoi(argv[1]);
    if(es_primo(number)){
        printf("es primo\n");
    }else{
        printf("no es primo\n");
    }
}
