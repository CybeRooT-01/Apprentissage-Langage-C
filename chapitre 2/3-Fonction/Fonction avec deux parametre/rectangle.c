#include <stdio.h>
double AirRectangle(double longueur, double largeur) // on cree notre fonction
{
    double aire = longueur * largeur; // on cree notre variable qui va multiplier les deux
    return aire;                      // on retourne un double
}
int main(int argc, char const *argv[])
{
    // on va executer la fonction Airectangle mais on va l'utiliser comme on faisait avec les variables et pour le type, c'un double puisque la fonction retourne un double
    printf("Le rectangle de 10 de longueur et 25 de largeur vaut %f", AirRectangle(10, 25));
    return 0;
}

/*void aireRectangle(double largeur, double hauteur)
{
    double aire = 0;

    aire = largeur * hauteur;
    printf("Rectangle de largeur %f et hauteur %f. Aire = %f\n", largeur, hauteur, aire);
    //Ici on ajoute le printf dans la fonction donc yaura pas de return et par consequent elle sera un type void
}

int main(int argc, char *argv[])
{
    aireRectangle(5, 10);
    aireRectangle(2.5, 3.5);
    aireRectangle(4.2, 9.7);

    return 0;
}*/