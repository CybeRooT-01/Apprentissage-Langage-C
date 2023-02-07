/*scanf est bien et simple a utiliser. mais son problem c'est que quand il detecte un space il laisse le reste dans le buffer
et quand le nombre de caractere saisi depasse la quantite de memoire prevu, il continu a ecrire sur le buffer et cree un Buffer Overflow
il faut donc utiliser fget aulieu de scanf
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void viderBuffer() // il vide le buffer en cas d'exces de carcatere.
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
        return 1;
    }
    else
    {
        viderBuffer();
        return 0;
    }
}
long lireLong()
{
    char nombreTexte[100] = {0}; // 100 cases devraient suffire

    if (lire(nombreTexte, 100))
    {
        // Si lecture du texte ok, convertir le nombre en long et le retourner
        return strtol(nombreTexte, NULL, 10);
    }
    else
    {
        // Si problème de lecture, renvoyer 0
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    /*
        char nom[10];

        printf("Quel est votre nom ? ");
        fgets(nom, 10, stdin); // stdin c'est le clavier (l'entree standard)
        printf("Ah ! Vous vous appelez donc %s !\n\n", nom);
        // pour gerer le saut de ligne, on va cree notre propre fonction d'affcihage
        return 0;
    */
    char nom[10];

    printf("Quel est votre nom ? ");
    lire(nom, 10);
    printf("Ah ! Vous vous appelez donc %s !\n\n", nom);
    /*Le problem ici c'est que si on a bcp de caracteres, le restant va flotter sur le buffer docn faut vider avec la fonction viderBuffer*/
    long age = 0;

    printf("Quel est votre age ? ");
    age = lireLong();
    printf("Ah ! Vous avez donc %d ans !\n\n", age);
    return 0;
}
