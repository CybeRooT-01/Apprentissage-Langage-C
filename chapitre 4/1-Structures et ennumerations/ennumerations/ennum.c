#include <stdio.h>
#include <stdlib.h>
typedef enum Volume Volume; // on fais notre typedef pour ne pas de faitguer a tjr tapper enum
enum Volume
{
    FAIBLE,
    MOYEN,
    FORT
    /*On a cree une ennumeration qui a 3 valeur possibles pour nos futurs variables qui seront de type Volume. automatiquement,
    le compilateur donne 0 a FAIBLE, 1 a MOYEN ainsi de suite et sa commence tjr par 0*/
};

typedef enum Volum__1 Volume__1;
enum Volume__1
{
    FAIBLE = 10,
    MOYEN = 50,
    FORT = 100
    /*ici on a attribuer des valeurs aux 3 valeur possibles pour nos futurs variables qui seront de type Volume.
    si on avait pas definit FORT a 100, il serai egal a 51. Le compilateur prend juste la derniere valeur et y ajoute 1*/
};

int main(int argc, char const *argv[])
{
    // Ennumerations
    Volume musique = MOYEN; // on cree une variable musique qui est de type volume et qui prend la valeur moyen. Il ne peux pas prendre 2 valeurs
    if (musique == MOYEN)
    {
        // Jouer la musique au volume moyen
    }
    return 0;
}
