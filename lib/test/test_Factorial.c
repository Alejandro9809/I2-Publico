#include "../src/Factorial.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int x= atoi(argv[1]);
    printf("%.f\n",factorial(x));
    return 0;
}