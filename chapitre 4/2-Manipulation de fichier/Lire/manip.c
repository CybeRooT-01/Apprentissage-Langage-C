#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 1000

/*  Lire une ligne avec fgetc() fgetc permet de lire une caractere mais on peut lire une ligne avec une boucle
int main(int argc, char const *argv[])
{
    FILE *fichier = NULL; //on cree un pointeur de type File (un structure contenu dans stdlib) et on l'inititalise a NULL
    int caractereActuel = 0;          // On initialise une variable de compteur a 0
    fichier = fopen("test.txt", "r"); // on ouvre notre ficgier en lecture seul
    if (fichier != NULL)              // si le fichier s'est ouvert
    {
        do
        {
            caractereActuel = fgetc(fichier); // On recupere une caractere
            printf("%c", caractereActuel);    // on l'affiche
        } while (caractereActuel != EOF);     // on continue tant qu'on a pas atteint le EOF
        fclose(fichier);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
    }

    return 0;
}*/
/* Lire une chaine avec Fgets
int main(int argc, char const *argv[])
{
    FILE *fichier = NULL;             // on cree un pointeur de type File (un structure contenu dans stdlib) et on l'inititalise a NULL
    char chaine[TAILLEMAX] = "";      // on cree une chaine vide de taille TAILLEMAX (1000)
    fichier = fopen("test.txt", "r"); // On ouvre le fichier
    if (fichier != NULL)              // si le fichier s'ouvre
    {
        fgets(chaine, TAILLEMAX, fichier); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
        printf("%s", chaine);              // on affiche chaine
        fclose(fichier);                   // On ferme le fichier
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
    }

    return 0;
}*/
/* LIRE UN FICHIER AVEC FGETS
int main(int argc, char const *argv[])
{
    FILE *fichier = NULL;             // on cree un pointeur de type File (un structure contenu dans stdlib) et on l'inititalise a NULL
    char chaine[TAILLEMAX] = "";      // on cree une chaine vide de taille TAILLEMAX (1000)
    fichier = fopen("test.txt", "r"); // On ouvre le fichier
    if (fichier != NULL)              // si le fichier s'ouvre
    {
        while (fgets(chaine, TAILLEMAX, fichier) != NULL) // fgets lit UNE LIGNE AU MAXIMUM et s'arrete quand elle renvoie NULL. Nous on va boucler tant qu'on rcoi pas de NULL
        {
            printf("%s", chaine); // on affiche chaine
        }
        fclose(fichier);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
    }

    return 0;
}
*/
int main(int argc, char *argv[])
{
    FILE *fichier = NULL;
    int score[3] = {15, 20, 30}; // Tableau des 3 meilleurs scores

    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {
        fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("Les meilleurs scores sont : %d, %d et %d", score[0], score[1], score[2]);

        fclose(fichier);
    }

    return 0;
}
// long ftell(FILE* pointeurSurFichier); Donne notre position actuelle (notre curseur) dans un fichier

// int fseek(FILE *pointeurSurFichier, long deplacement, int origine);
// fseek(fichier, 2, SEEK_SET); donne la position a deux caractere aprs le debut
// fseek(fichier, -4, SEEK_CUR); 4 caracteres avant la position courante
// fseek(fichier, 0, SEEK_END); 0 caractere apres la fin... donc la fin

// void rewind(FILE *pointeurSurFichier); retourne le curseur a la oisition de depart

int main(int argc, char *argv[])
{
    rename("test.txt", "test_renomme.txt");
    // renomme test.txt en test_renomme.txt
    return 0;
}
int main(int argc, char *argv[])
{
    remove("test2.txt");
    // supprime le fichier test2 (Triple con tu le vois pas parcequ'elle est suppriméé)
    return 0;
}
