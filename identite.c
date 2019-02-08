#include "identite.h"

void CreerFichier(FILE *pFichier)
{
    system("cls");
    if (((pFichier=fopen(PATH,"a")))==NULL)
    {
        perror("Erreur de creation de fichier");
    }
    else if (pFichier == NULL)
    {
        pFichier = fopen(PATH,"a");
        fclose(pFichier);
        puts("Fichier bien cree\n");
    }
}

void SaisirFichier(FILE *pFichier)
{
    identite carteidentite;

    system("cls");
    printf("Entrez nom: ");
    fflush(stdin);
    pFichier = fopen(PATH,"a");
    gets(carteidentite.cNom);
    fputs(carteidentite.cNom,pFichier);
    fputc('\n',pFichier);
    fclose(pFichier);

    printf("Entrez prenom: ");
    pFichier = fopen(PATH,"a");
    gets(carteidentite.cPrenom);
    fputs(carteidentite.cPrenom,pFichier);
    fputc('\n',pFichier);
    fclose(pFichier);

    printf("Entrez adresse: ");
    pFichier = fopen(PATH,"a");
    gets(carteidentite.cAdresse);
    fputs(carteidentite.cAdresse,pFichier);
    fputc('\n',pFichier);
    fclose(pFichier);

    printf("Entrez ville: ");
    pFichier = fopen(PATH,"a");
    gets(carteidentite.cVille);
    fputs(carteidentite.cVille,pFichier);
    fputc('\n',pFichier);
    fclose(pFichier);

    printf("Entrez code postal: ");
    pFichier = fopen(PATH,"a");
    gets(carteidentite.cCodepostal);
    fputs(carteidentite.cCodepostal,pFichier);
    fputc('\n',pFichier);
    fputc('\n',pFichier);
    fclose(pFichier);
    system("cls");
}

void LireFichier(FILE *pFichier)
{
    FILE *pId;
    char ch;
    pId = fopen (PATH,"r");
    if (pFichier == NULL)
    {
        perror ("Erreur");
        fclose (pId);
    }
   else
   {
        while((ch = fgetc(pId)) != EOF)
        {
            printf("%c",ch);
        }
    fclose (pId);
   }
}
