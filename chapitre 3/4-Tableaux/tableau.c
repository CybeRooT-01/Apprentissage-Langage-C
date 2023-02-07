#include <stdio.h>
#include <stdlib.h>
int sommeTableau(int tableau[], int tailleTableau);      // Le prototype du tableau Somme
double moyenneTableau(int tableau[], int tailleTableau); // Le prototype du tableau moyenne
int main(int argc, char const *argv[])
{
    int tableau[4] = {35, 15, 45, 5}, taille = 4;                    // je cree un tableau de taille 4 et une variable taille contenant la taille du tableau
    printf("La somme vaut %d \n", sommeTableau(tableau, taille));    // j'affiche la somme du tableau, le resultat retourner quoi (la variable somme) en appelantdirectement la fonction
    printf("La moyenne vaut %f\n", moyenneTableau(tableau, taille)); // On affiche pareillement que la somme ATTENTION ici c'est des floats
    return 0;
}
int sommeTableau(int tableau[], int tailleTableau) // je declare ma fonction qui calcule la somme
{
    int somme = 0; // je cree une variable somme
    for (int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i]; // pour chaque element, je l'ajoute a la variable somme
    }
    return somme; // je retourne somme
}
double moyenneTableau(int tableau[], int tailleTableau) // je declare ma fonction qui calcule les moyenne
{
    int somme = 0;
    for (int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i]; // On calcule la somme
    }
    int moyenne = (double)somme / (double)tailleTableau; // on converti les variables somme et tailleTableau en double
    return moyenne;
}
