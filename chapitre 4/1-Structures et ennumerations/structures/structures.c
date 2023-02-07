#include <stdio.h>
#include <stdlib.h>
// Structutres on peut y mettre beaucoups de variabels de types differente
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[100];

    int age;
    int etudiant; // Booléen : 1 = etudiant, 0 = non etudiant
};

struct Coordonnes
{
    x;
    y;
};

typedef struct Coordonnes Coordonnes;
typedef struct Personne Personne; // Signifie remplace moi struct Personne par Personne simplement

int main(int argc, char const *argv[])
{
    // struct Personne etudiant; //cree une variable etudiant de type personne (sans le typedef)

    /*C'est chiant de ddevoir toujour ecrir struct a chaque fois qu'on veut cree une variable de type personne
    donc il faut cree un alias de structure comme ça on va juste ecrir Personne etudiant comme int age pour creer une variable
    de type personne*/

    Personne etudiant; // cree un structure de type personne avec
    printf("Quel est ton nom ? \n");
    scanf("%s", &etudiant.nom);
    printf("Quel est ton Prenom ? \n");
    scanf("%s", &etudiant.prenom);
    etudiant.age = 18; // pour acceder a notre sous-variable age de notre variable etudiant qui est de type personne, on utilise la notation dot comme les objets
    printf("tu t'appel %s %s et t'a %d ans\n", etudiant.nom, etudiant.prenom, etudiant.age);

    Coordonnes *point = NULL; // On cree un pointeur de type Coordonnées
    return 0;
}
