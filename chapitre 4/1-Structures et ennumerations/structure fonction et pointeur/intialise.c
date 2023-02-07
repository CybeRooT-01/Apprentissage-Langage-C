/*On va cree une fonction qui va permettre d'initialiser un structure*/
#include <stdio.h>
#include <stdlib.h>
typedef struct coordonnes coordonnes; // on se facilite la saisie des structure avec le typedef
struct coordonnes                     // on cree notre structure qui aura deux sous variables x et y
{
    x;
    y;
};
void renitialiseCoordonnes(coordonnes *point) // on cree notre fonction qui recevra un pointeur de type coordonnes et les initialise a NULL
{
    (*point).x = NULL; // on ecris pas *point.x parceque le (.) va se coller a point et non le pointeur *point donc on met un paranthese sur l'ensemble
    point->y = NULL;   // oubien in utilise cette notation. elle est faisable uniquement avec les pointeurs
}
int main(int argc, char const *argv[])
{
    coordonnes mapoint;              // on cree notre variable mapoint de type coordonnes
    renitialiseCoordonnes(&mapoint); // on appel notre fonction et on lui donne l'adresse de notre variable
    return 0;
}
