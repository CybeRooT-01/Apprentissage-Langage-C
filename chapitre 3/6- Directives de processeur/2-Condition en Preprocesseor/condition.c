#if condition
/* Code source à compiler si la condition est vraie */
#elif condition2
/* Sinon si la condition 2 est vraie compiler ce code source */
#endif

// =================================================================================
#define WINDOWS

#ifdef WINDOWS
/* Code source pour Windows */
#endif

#ifdef LINUX
/* Code source pour Linux */
#endif

#ifdef MAC
/* Code source pour Mac */
#endif
/*
Ce bout de code test un programme multiplateforme. ce qui change c'est le define qui va s'adapter en fonction de notre Os et on compile
*/
// ===========================INCLUSION INFINIE=======================
#ifndef DEF_NOMDUFICHIER // Si la constante n'a pas été définie le fichier n'a jamais été inclus
#define DEF_NOMDUFICHIER // On définit la constante pour que la prochaine fois le fichier ne soit plus inclus

/* Contenu de votre fichier .h (autres include, prototypes, define...) */

#endif
/*Ce qui se passe ici, c'est que a l apremiere inclusion DEF_NOMDUFICHIER n'est pas defini puiqque c la premiere fois donc il l'inclu
comme sa, la prochaine fois, la condition sera fausse et yaura pas une seconde inclusion
NB: il faut remplacer la partie "NOMDUFICHIER" par le nom veritable de notre fichier*/