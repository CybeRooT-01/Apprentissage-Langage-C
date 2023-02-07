#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int premierNombre;
    int deuxiemeNombre;
    printf("Donnez le premier nombre\n");
    scanf("%d", &premierNombre);
    printf("Donnez le second nombre \n");
    scanf("%d", &deuxiemeNombre);
    int somme = premierNombre + deuxiemeNombre;
    printf("%d +%d = %d ", premierNombre, deuxiemeNombre, somme);

    return 0;
}
