#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef IDENTITE_H_INCLUDED
#define IDENTITE_H_INCLUDED
#define PATH "fichier.txt"
#define TAILLE 255

typedef struct identite
{
    char cNom[TAILLE];
    char cPrenom[TAILLE];
    char cAdresse[TAILLE];
    char cVille[TAILLE];
    char cCodepostal[TAILLE];
    int nId;
}identite;

extern void CreerFichier();
extern void SaisirFichier();
extern void LireFichier();

#endif
