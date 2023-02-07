#include <stdio.h>
#include <stdlib.h>
/*int main(int argc, char const *argv[])
{
    int nombreDonne = 0;      // on cree une variable qu'on met a 0;
    while (nombreDonne != 47) // tant que la variable est different de 47
    {
        printf("Choisissez le nombre 47 \n"); // demande au user de donner le nombre 47
        scanf("%d", &nombreDonne);
    }
    return 0;
}*/
/*int main(int argc, char const *argv[])
{
    int number = 10; // cree un compteur et l'initialiser a 10
    do
    {
        printf("binvenu sur openclassroom \n"); // effectuer cet action tant que le nombre est superieur a 0;
        number--;                               // decrementer a chaque itteration
    } while (number > 0);                       // tant que le compteur est > 0

    return 0;
}*/
/*int main(int argc, char const *argv[])
{
    int number = 10;
    while (number > 0)
    {
        printf("binvenu sur openclassroom \n"); // effectuer cet action tant que le nombre est superieur a 0;
        number--;                               // decrementer a chaque itteration
    }
    return 0;
}*/
int main(int argc, char const *argv[])
{
    for (int i = 10; i > 0; i--)
    {
        printf("binvenu sur openclassroom \n"); // effectuer cet action tant que le nombre est superieur a 0;
    }
    return 0;
}
