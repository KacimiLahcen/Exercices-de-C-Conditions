#include <stdio.h>

int main () {

int num1 ;
int num2 ;

printf("Entrer 1er nombre : ");
scanf("%d",&num1);

printf("Entrer 2eme nombre : ");
scanf("%d",&num2);

    
if( num1 == num2) {
    int result = (num1+num2)*3 ;
    printf("(%d + %d)x3 = %d",num1,num2,result);
}else {
    int result = num1+num2;
    printf("%d + %d = %d",num1,num2,result);
}

    return 0;
}