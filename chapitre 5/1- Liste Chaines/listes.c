// on cree une liste chaines de nombre entier
#include <stdio.h>
#include <stdlib.h>
// Chaque element de la liste aura la structure suivante
typedef struct Element Element;

struct Element
{
    int nombre;       // une donnée (on pourrait le remplacer par n'importe quel autre)
    Element *suivant; // un pointeur *suivant de type Element qui contient l'adresse du prochain element de la liste
};
typedef struct Liste Liste;
// cree le structure de controle
struct Liste
{
    Element *premier; // contient un pointeur vers le premier element de la liste
};

// Initialise la liste
Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}
// Insere un element
void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
    /*NB:La fonction insertion() prend en paramètres :

    l'élément de contrôle liste(qui contient l'adresse du premier élément) ;
    et le nombre à stocker dans le nouvel élément que l'on va créer.*/
}
// Supprimer un element
void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}
// Afficher la liste chainéee
void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}
//===========ON TEST NOS FONCTIONS============
int main(int argc, char const *argv[])
{
    Liste *maListe = initialisation();

    insertion(maListe, 4);
    insertion(maListe, 8);
    insertion(maListe, 15);
    suppression(maListe);

    afficherListe(maListe);
    return 0;
}