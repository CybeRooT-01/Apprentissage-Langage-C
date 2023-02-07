#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fichier = NULL;

    fichier = fopen("test.txt", "r+");

    if (fichier != NULL)
    {
        int age = 0;
        // On peut lire et écrire dans le fichier
        fputc('A', fichier);                                                   // Permet d'ecrire une seule caractère
        fputs("Bonjours les Developpeurs \n Comment Allez vous ?\n", fichier); // Permet d'ecrire une chaine de caraactere
        printf("Quelle age avez vous? \n");
        scanf("%d", &age);
        fprintf(fichier,"Le monsieur qui a edier le fichier a %d ans \n", age); // edite un fichier en tenant compte de la variable recupere par le scanf

        fclose(fichier); // On FERME le fichier
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}

/*"r"  : lecture seule. Vous pourrez lire le contenu du fichier, mais pas y écrire. Le fichier doit avoir été créé au préalable.

"w"  : écriture seule. Vous pourrez écrire dans le fichier, mais pas lire son contenu. Si le fichier n'existe pas, il sera créé.

"a"  : mode d'ajout. Vous écrirez dans le fichier, en partant de la fin du fichier. Vous ajouterez donc du texte à la fin du fichier. Si le fichier n'existe pas, il sera créé. Ce mode d'ajout peut être utile si vous voulez seulement ajouter des informations à la fin du fichier.

"a+"  : ajout en lecture / écriture à la fin. Vous écrivez et lisez du texte à partir de la fin du fichier. Si le fichier n'existe pas, il sera créé.

"r+"  : lecture et écriture. Vous pourrez lire et écrire dans le fichier. Le fichier doit avoir été créé au préalable.

"w+"  : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.*/
