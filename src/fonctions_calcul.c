#include "fonctions_calcul.h"

time_t dodo_time_calculer_heure_reveil(time_t coucher, int cycles) 
{
     time_t reveil = coucher + TEMPS_POUR_S_ENDORMIR + (cycles * DUREE_CYCLE_SOMMEIL);
     return reveil;
}

time_t dodo_time_calculer_heure_coucher(time_t reveil, int cycles)
{
     time_t coucher = reveil - TEMPS_POUR_S_ENDORMIR - (cycles * DUREE_CYCLE_SOMMEIL);
     return coucher;
}

int dodo_time_calculer_temps_restant_avant_coucher(time_t heure_coucher)
{
     time_t heure_maintenant = time(NULL);
     int temps_restant = (int)(heure_coucher - heure_maintenant);
     return temps_restant;
}

char *dodo_time_convertir_seconde_en_chaine_formatee(int secondes)
{
     int minutes = secondes / 60;
     int h = minutes / 60;
     int m = minutes % 60;
     
     static char s[5] = "00:00";
     
     if (h < 10){
	  s[0] = '0';
	  s[1] = (char)(h + 48);
     }
     else {
	  s[0] = (char)((h / 10) + 48);
	  s[1] = (char)((h % 10) + 48);
     }
     
     if (m < 10) {
	  s[3] = '0';
	  s[4] = (char)(m + 48);
     }
     else {
	  s[3] = (char)((m / 10) + 48);
	  s[4] = (char)((m % 10) + 48);
     }
     
     return s;
}
