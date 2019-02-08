#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "identite.h"
#define PATH "fichier.txt"
#define TAILLE 255

int main()
{
    FILE *pFichier;
    CreerFichier();
    int nChoix=0;
    do
    {
        fflush(stdin);
        printf("Entrez 1 pour saisir client\nEntrez 2 pour lire fichier Clients\nEntrez 0 pour quitter\n");
        scanf("%d",&nChoix);
        switch(nChoix)
        {
            case 1:
                SaisirFichier();
            break;
            case 2:
                LireFichier();
            break;
        }
    }
    while(nChoix!=0);
    printf("Fermeture du programme\n");
    return 0;
}
