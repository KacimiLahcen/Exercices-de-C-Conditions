#include <stdio.h>

int main () {

float annee ;

printf("Entrer nombre des années: ");
scanf("%f",&annee);

    int mois = annee * 12 ;
    printf("nombre des mois est : %d \n",mois);

    int jours = annee * 365 ;
    printf("nombre des jours est : %d \n",jours);

    int heures = jours * 24 ;
    printf("nombre des heures est : %d \n",heures);

    int minutes = heures * 60 ;
    printf("nombre des minutes est : %d \n",minutes);
  
    int secondes = minutes * 60 ;
    printf("nombre des secondes est : %d \n",secondes);

    return 0;
}