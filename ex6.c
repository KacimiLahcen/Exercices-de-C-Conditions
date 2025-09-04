#include <stdio.h>
#include <math.h>

int main () {

float a ;

printf("Entrer un nombre : ");
scanf("%f",&a);
if( a > 0) {
    printf("ce nombre est : Positif ");
}else if( a == 0){
    printf("ce nombre est : Nul ");
}else if( a < 0){
    printf("ce nombre est : Négatif ");
}

    return 0;
}