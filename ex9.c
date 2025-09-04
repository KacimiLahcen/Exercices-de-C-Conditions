#include <stdio.h>

int main () {

char character ;

printf("Entrer un caractère : ");
scanf("%c",&character);

if( character <= 90 && character >= 65 || character <= 122 && character >= 97 ) {
    printf("c’est une lettre alphabétique \n ");
}else {
    printf("ce n’est pas une lettre alphabétique  ");
}


    if( character <= 90 && character >= 65 ) {
    printf("ce caractère est une lettre majuscule ");
}else if ( character <= 122 && character >= 97 ) {
    printf("ce caractère est une lettre miniscule ");
}

    return 0;
}