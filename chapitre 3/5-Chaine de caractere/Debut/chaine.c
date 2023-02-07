#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // char lettre = 'a'; je declare une variable contenant la lettre a
    // printf("Mon premier caractere en c est: %c", lettre); j'affiche la caractère avec %c

    // char caract =0; on cree une variable caract qu'on initialise a 0;
    // printf("Donnez votre caractère \n");on demande au user de donner sa caractere
    // scanf("%c", &caract);on reprend la caractrer
    // printf("Votre caractère est %c\n", caract);et on l'affiche ici
    // char chaine[] = "bonjour";
    // Pour changer le "j" on peut toujour faire puisque les chaine de caractere sont des tableaux de caractere
    // chaine[3] = 's';
    // printf("La chaine est %s", chaine);
    char chaine[100];
    printf("quel est ton nom? \n");
    scanf("%s", &chaine);
    printf("Bonjour %s, je suis ravi de te connaitre", chaine);
    return 0;
}
