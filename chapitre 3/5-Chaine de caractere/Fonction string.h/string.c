#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    //=========strlen========= donne la longueur d'une chaine
    char chaine[] = "salut";
    int longueur = strlen(chaine);
    printf("La chaine %s contient %d caracteres \n", chaine, longueur);

    //=========== strcpy ======== copie une chaine dans un autre
    char text[] = "salut", copie[100];
    strcpy(copie, chaine); // On copie "chaine" dans "copie"
    printf("la chaine est %s\n", chaine);
    printf("La copie vaut %s\n", copie);

    //========= strcat ========== concatene deux chaines
    /* On crée 2 chaînes. chaine1 doit être assez grande pour accueillir
    le contenu de chaine2 en plus, sinon risque de plantage */
    char chaine1[100] = "Salut ", chaine2[] = "Mateo21";

    strcat(chaine1, chaine2); // On concatène chaine2 dans chaine1

    // Si tout s'est bien passé, chaine1 vaut "Salut Mateo21"
    printf("chaine1 vaut : %s\n", chaine1);
    // chaine2 n'a pas changé :
    printf("chaine2 vaut toujours : %s\n", chaine2);

    // ============= strcmp ============= compare deux chaines 0 signifie "identique" ;et une autre valeur signifie "différent".
    char chaine3[] = "Texte de test", chaine4[] = "Texte de test";

    if (strcmp(chaine3, chaine4) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }
    // strchr == cherche une caractere dans une chaine
    // strpbrk == cherche le premier caractére dans une chaine
    // strstr == recherche une chaine dans une autre
    // sprintf == ecris dans une chaine... elle ressemble a printf(qui ecris dans un ecran) lui, sprintf il ecris dans une chaine
    return 0;
}
