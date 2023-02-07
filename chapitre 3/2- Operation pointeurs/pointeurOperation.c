#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int age = 10;                                                                                         // on cree la variable age qui cocntient la variable 10
    printf("La variable age contient: %d \n", age);                                                       // On affiche la valeur de la vaariable age
    printf("L'addresse de la variable age est: %p \n", &age);                                             // on affiche l'addresse de la variable age
    int *pointeurAge = &age;                                                                              // on cree un pointeur qui contient l'addresse de la avriable age
    printf("La variable pointeurAge contient l'addresse de la variabel age qui est: %p \n", pointeurAge); // on affiche la variable pointeurAge
    printf("La valeur de la variable (age) dont pointe pointeurAge est : %d \n", *pointeurAge);           // On affiche la valeur de de la variable dont l'addresse est contenu dans ke pointeur pointeurAge
    return 0;
}
