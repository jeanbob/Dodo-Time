#include <time.h>

#define DUREE_CYCLE_SOMMEIL 5400 // Durée en secondes d'un cycle du sommeil
#define TEMPS_POUR_S_ENDORMIR 840 // Durée en secondes du temps nécessaire moyen pour s'endormir

// Prototypage des fonctions
time_t dodo_time_calculer_heure_reveil (time_t, int);
time_t dodo_time_calculer_heure_coucher (time_t, int);
int dodo_time_calculer_temps_restant_avant_coucher(time_t);
char *dodo_time_convertir_seconde_en_chaine_formatee(int); 
