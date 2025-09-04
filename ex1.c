#include <stdio.h>

int main () {

int nombre ;

printf("Entrer un nombre entier : ");
scanf("%d",nombre);
    int reste = nombre % 2 ; 
if( reste == 0) {
    printf("Le nombre est pair");
}else {
    printf("Le nombre est impair");
}

    return 0;
}