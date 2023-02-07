#include <stdio.h>
#include <stdlib.h>
void DecoupeMinute(int *pointeurHeure, int *pointeurMinute) // on initialise la fonction avec comme argument des pointeurs
{
    *pointeurHeure = *pointeurMinute / 60;
    *pointeurMinute = *pointeurMinute % 60;
}
int main(int argc, char const *argv[])
{
    int heure = 0, minute = 100; // on cree deux variables heures et minutes

    DecoupeMinute(&heure, &minute);                   // on appelle la fonction en lui passant comme argument les addresses des variables
    printf("%d heures et %d minutes", heure, minute); // on affiche les variables
    return 0;
}
// NB: de cette façon on va directement modifier les variables en memoire et non pas les copies... vu que quand on appelle une fonction, les variables sont copiés
