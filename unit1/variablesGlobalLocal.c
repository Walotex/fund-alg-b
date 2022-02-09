#include <stdio.h>
#include <stdlib.h>

//*Global Variables*//
char* date ="02-02-22T10:25:00z";
/////////////////////////////////////////////////////

/// La ejecución del programa ///
int main(){
    date = "02-03-22T10:25:00z";
    int hours = 24; //Local:main    %d-%i
    float pi = 3.1416; //%f
    char character = 'c'; //%c
    char* name  = "Walo"; //%s
    int *address = &hours; //%p
    hours = hours + 2;
    printf("hours: %d, %s\n", hours, name); //printf("valor: AQUI_VA_UNA_VARIABLE --> %c ", character);
    return 0;
}
/////////////////////////////////