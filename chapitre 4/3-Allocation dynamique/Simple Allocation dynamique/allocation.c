#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*Etape 1 : Demandez une allocation de mémoire avec malloc*/
    int *MemoireAllouee = NULL;           // On cree un pointeur sur int et on l'initialise a NULL
    MemoireAllouee = malloc(sizeof(int)); // La fonction malloc inscrit dans notre pointeur l'adresse qui a été reservée.

    /*Étape 2 : Testez le pointeur pour vérifier la valeur retournée par malloc*/
    if (MemoireAllouee == NULL) // si l'allocation a echouée (genre si la memoire est pleine)
    {
        exit(0); // annule tout
    }
    // On peut utiliser la memoire ici
    printf("Quelle age as-tu? \n");
    scanf("%d", MemoireAllouee);                 // Pas  besoin de preciser le &(qui permet de recuperer l'adresse), c'est un vulgaire pointeur donc il contient une addresse
    printf("Vous avez %d ans", *MemoireAllouee); // On affiche la valeur où pointe le pointeur MemoireAllouee (avec un * avant)
    /*Étape 3 : On libere la memoire*/
    free(MemoireAllouee);                        // On a plus besoin de la memoire donc on la libere
    return 0;
}

/*typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    printf("Coordonnees : %d octets\n", sizeof(Coordonnees)); // on voit que coordonnee fait 8octects
    Coordonnees tableau[100];                                 // on utilise alors 8*100 octects
    return 0;
}*/
/*int main(int argc, char const *argv[])
Donne la taille occupé par les diferents types de variables
{
    printf("char : %d octets\n", sizeof(char));
    printf("int : %d octets\n", sizeof(int));
    printf("long : %d octets\n", sizeof(long));
    printf("double : %d octets\n", sizeof(double));
    return 0;
}*/
