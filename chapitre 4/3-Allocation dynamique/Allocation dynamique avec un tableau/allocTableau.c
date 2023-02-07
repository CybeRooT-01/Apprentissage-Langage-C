#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int amis, i;
    int *ageAmi = NULL; // On cree notre ppinteur et on l'initialise a NULL
    printf("Combien d'amis as-tu ? \n");
    scanf("%d", &amis);
    // Etape 1: On demande la Memoire
    ageAmi = malloc(amis * sizeof(int)); // On multiplie le nombre d'amis par la taille de chaque int pour avoir la taille exact qu'on a besoin
    // Etape 2: On verifie si l'l=allocation a marché
    if (ageAmi == NULL) // si notre pointeur est tjr null donc ya pas eu d'allocation donc on annule le programme
    {
        exit(0);
    }
    // si l'allocation marche on va executer ces codes
    // On demande l'age des amis un a un
    for (i = 0; i < amis; i++)
    {
        printf("Quelle age a l'amis numero %d\n", i + 1);
        scanf("%d", &ageAmi[i]);
    }
    // on affiche les ages stockes un a un
    printf("\n\n Vos amis ont les ages suivantes :\n");
    for (i = 0; i < amis; i++)
    {
        printf("%d ans \n", ageAmi[i]);
    }

    // Etape 3: On libere la memoire;
    free(ageAmi); // On a fini donc on libere la memoire

    return 0;
}
