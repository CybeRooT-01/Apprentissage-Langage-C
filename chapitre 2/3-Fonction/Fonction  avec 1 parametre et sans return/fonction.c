#include <stdio.h>
#include <stdlib.h>
void punition(int nombre) // on cree une fonction void cad qui ne renvoie rien
{
    for (int i = 0; i < nombre; i++)
    {
        printf("je vais apprendre mes cours ! \n");
    }
}
int main(int argc, char const *argv[])
{
    punition(5); // on appelle la fonction punition avec comme argument le nombre de fois qu'on veux ecrire la phrase"je vais...."
    return 0;
}
