#include <stdio.h>
#include <math.h>

int main () {

double a ;
double b ;
double c ;

printf("Entrer la valeur de a : ");
scanf("%lf",&a);

printf("Entrer la valeur de b : ");
scanf("%lf",&b);

printf("Entrer la valeur de c : ");
scanf("%lf",&c);

    double Delta = pow(b,2) - 4 * a * c ;
    
if( Delta > 0) {
    printf("L'equation admis Deux solutions réelles distinctesd");
}else if( Delta == 0){
    printf("L'equation admis Une solution double");
}else if( Delta < 0){
    printf("L'equation n'admis pas de solution réelle");
}

    return 0;
}