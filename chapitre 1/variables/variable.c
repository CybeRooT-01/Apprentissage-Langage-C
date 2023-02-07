#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int nombreDeVies = 3; // Je declare une variable nombreDeVies
    int age;
    printf("Quelle est ton age ?\n");                                 // on demande au user son age
    scanf("%d", &age);                                                // et on le stock a la variable age
    printf("Tu as %d ans et il te reste %d vies", age, nombreDeVies); // on affiche le message en concatenant avec les variables age et nombreDeVies
    return 0;
}
