#include <stdio.h>

int main () {

    int jour, mois, annee;

    char *lesmois[] = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août",
        "Septembre", "Octobre", "Novembre", "Décembre"
    };

    printf("Entrer une date (JJ/MM/AAAA) : \n");
    scanf("%d / %d / %d ",&jour, &mois, &annee);

    printf("Date : %d-%s-%d " ,jour, lesmois[mois-1], annee);

    return 0;
}