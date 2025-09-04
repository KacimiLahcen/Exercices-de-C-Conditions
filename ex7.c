#include <stdio.h>
#include <math.h>

int main () {

char character ;

printf("Entrer un caractère : ");
scanf("%c",&character);

if( character <= 90 && character >= 65 ) {
    printf("ce caractère est une lettre majuscule ");
}else {
    printf("ce caractère est une lettre miniscule ");
}

    return 0;
}