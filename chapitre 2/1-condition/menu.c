#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int choix;
    printf(" === Menu === \n 1. Royal Cheese \n 2. Mc Deluxe \n 3. Mc Bacon \n 4. Big Mac\n "); // on cree le menu
    printf("Votre choix\n");                                                                    // on demande au user le choix
    scanf("%d", &choix);                                                                        // on associe le choix du user a la variable choix
    switch (choix)                                                                              // selon choix
    {
    case 1:                                           // si choix == 1
        printf("Vous avez choisi le Royal Cheese\n"); // faire sa
        break;                                        // et termine le switch
    case 2:
        printf("Vous avez choisi le Mc Deluxe\n");
        break;
    case 3:
        printf("Vous avez choisi le Mc Bacon\n");
        break;
    case 4:
        printf("Vous avez choisi le Big Mac\n");
        break;
    default:
        printf("Veuillez chosir parmis les articles disponibles \n");
        break;
    };
    return 0;
}
