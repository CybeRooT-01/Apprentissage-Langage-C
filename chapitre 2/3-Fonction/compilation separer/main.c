#include <stdio.h>
#include <stdlib.h>
#include "main.h" //on include le main.h qui contient le prototype de la fonction triple comme sa il pourra etre lu mm si ob l'a declarer apres la fonction main
int main(int argc, char const *argv[])
{
    triple(4);
    return 0;
}
int triple(int nombre)
{
    return nombre * 3;
}
/*
NB: Quand on a un gros projet, on met un tout les prototypes dans un fochier.h et on ecris nptre code dans un autre fichier.c 
mais avant la fonction main, on doit inclure le fichier.h en question et avec des guillzumets/