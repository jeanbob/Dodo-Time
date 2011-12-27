#include <stdio.h>
#include "fonctions_calcul.h"

#define NBR_CYCLES 5 // Nombres de cycles de sommeil

void main (void)
{
     printf("10000 secondes en heure : %s\n", dodo_time_convertir_seconde_en_chaine_formatee(10000));
     printf("Calcul de l'heure à laquelle on se réveillera en ayant effectuer %d cycles de sommeil : ", NBR_CYCLES);
     time_t now = time(NULL);
     time_t reveil = dodo_time_calculer_heure_reveil(now, NBR_CYCLES);
     char reveil_s[6];
     strftime(reveil_s, sizeof(reveil_s), "%H:%M", localtime(&reveil));
     printf("%s\n",reveil_s);     
     time_t lever = reveil + 8765;
     char lever_s[6];
     strftime(lever_s, sizeof(lever_s), "%H:%M", localtime(&lever));
     printf("Calcul de l'heure à laquelle il faut se coucher pour se réveiller à %s : ", lever_s);
     time_t coucher = dodo_time_calculer_heure_coucher(lever, NBR_CYCLES);
     char coucher_s[6];
     strftime(coucher_s, sizeof(coucher_s), "%H:%M", localtime(&coucher));
     printf("%s\n", coucher_s);
     printf("Temps restant avant %s : ", coucher_s);
     int restant = dodo_time_calculer_temps_restant_avant_coucher(coucher);
     //printf("%d\n", restant);
     printf("%s\n", dodo_time_convertir_seconde_en_chaine_formatee(restant));
}

