#include <stdio.h>

int main () {

    int heure1, minute1, seconde1;
    int heure2, minute2, seconde2;

    printf("Entrer le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d",&heure1, &minute1, &seconde1);
    printf("Entrer le deuxieme instant (HH:MM:SS) : ");
    scanf("%d:%d:%d",&heure2, &minute2, &seconde2);

    if (heure1 > heure2){
        printf("Le second instant précède le premier");
    }else if (heure1 < heure2) {
        printf("Le premier instant précède le second");
    }else if (heure1 == heure2) {
        if( minute1 > minute2) {
            printf("Le second instant précède le premier");
        }else if (minute1 < minute2) {
            printf("Le premier instant précède le second");
        }else if ( minute1 == minute2) {
            if( seconde1 > seconde2) {
                printf("Le second instant précède le premier");
            }else if (seconde1 < seconde2){
                printf("Le premier instant précède le second");
            }else if (seconde1 == seconde2){
                printf(" Les deux sont identiques ");
            }

        }
    }


    return 0;
}
