#include <stdio.h>

int main () {

    int heure1, minute1, seconde1;
    int heure2, minute2, seconde2;

    printf("Entrer le premier instant (HH:MM:SS) : \n");
    scanf("%d / %d / %d ",&heure1, &minute1, &seconde1);

    printf("Entrer le deuxieme instant (HH:MM:SS) : \n");
    scanf("%d / %d / %d ",&heure2, &minute2, &seconde2);

    if (heure1 > heure2)
    {
        printf("Le premier instant précède le second");
    }
    

    return 0;
}