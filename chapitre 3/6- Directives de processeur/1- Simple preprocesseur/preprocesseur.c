//#include inclu des fichiers
// #define cree une constante qui sera pas stocké et qui va remplacer toutes les occurences par la donnéé requis.
#include <stdio.h>
#define TAILLE_MAX 100
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600
#define NOMBRE_PIXELS (LARGEUR_FENETRE * HAUTEUR_FENETRE)
#define MAJEUR(age, nom) \
    if (age >= 18)       \
        printf("Vous etes majeur %s\n", nom);
// cree un macro qui prend deux parametres
//  avant la compilation, tout les variables avec NOMBRE_PIXELS seront remplaces par le produit de 600*800
int main(int argc, char const *argv[])
{
    char chaine1[TAILLE_MAX], chaine2[TAILLE_MAX];
    // apres passage du preprocessor, sa va etre: char chaine1[100], chaine2[100] ;
    /*Directives predefinis par le processeur
         __LINE__ donne le numéro de la ligne actuelle.

         __FILE__ donne le nom du fichier actuel.

         __DATE__ donne la date de la compilation.

         __TIME__ donne l'heure de la compilation.
    */
    printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
    MAJEUR(22, "Maxime") // On appel notre macro avec ces données
    return 0;
}
