#include <stdio.h>
#include <string.h>

int main (int argc, char** argv){
    if (argc <= 1) return 0;

    printf("Program executed: %s, number of inputs elements: %d\n", argv[0], (argc-1));
    printf("Hola %s %s %s, Bienvenido!\n", argv[1], argv[2], argv[3]);
    return 0;
}