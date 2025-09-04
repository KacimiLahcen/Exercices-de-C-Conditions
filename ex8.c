#include <stdio.h>

int main () {
    float moyenne;

    printf("votre moyenne : \n");
    scanf("%f",&moyenne);

        if (moyenne < 10)  {
            printf(" Échec (Recalé) ");
        }else if ( moyenne >=10 && moyenne < 12 )  {
            printf(" Passable ");
        }else if ( moyenne >=12 && moyenne < 14 )  {
            printf(" Assez Bien ");
        }else if ( moyenne >=14 && moyenne < 16 )  {
            printf(" Bien ");
        }else if ( moyenne >=16)  {
            printf(" Très Bien ");
        }


    return 0;
}