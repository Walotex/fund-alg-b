#include <stdio.h>

int main(){
    
    int num;
    printf("Please, submit your digits: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d Your number is even.", num);
    else
        printf("%d Your number is odd.", num);

    return 0;
}