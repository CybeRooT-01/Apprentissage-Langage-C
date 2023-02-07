#include <stdio.h>
#include <stdlib.h>
void DecoupeMinute(int heure, int minute)
{
    // on cree une fonction avec les inctruction de calcule qu'on va appeler dans la fonction main
    heure = minute / 60;
    minute = minute % 60;
}
int main(int argc, char const *argv[])
{

    //  On a une variable minutes qui vaut 90. Après appel de la fonction, je veux que ma variable "heures" vaille 1 et que ma variable "minutes" vaille 30

    int heure = 0, minute = 90;
    DecoupeMinute(heure, minute);
    printf("%d heures, %d minutes", heure, minute);
    return 0;
}
// NB: sa marche pas parceque dans decoupeminute, les variable on bien eu les valeurs exactes mais apres avoir sorti de la fonction decoupeminute,
// les cariables ont ete efface de la memoire et donc une fois dans la fonction main; ils repprennent leurs valeur 0 et 90mn ce qui seront affichés
