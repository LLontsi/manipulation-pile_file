#include<stdio.h>
#include <stdlib.h>
#include "FILE.h"

void creefile(File *f)
{
     f->premier=NULL;
}
int dernier(File*f)
{
    Listes *liste=f->premier;
    if(f==NULL){
        return 0;
    }
    while(liste->suiv!=NULL){
        liste=liste->suiv;
    }
    return liste->val;
}
void enfilerf(File*f,int nombre)
{
    Listes *nouveau= malloc(sizeof(*nouveau));
    if(f== NULL || nouveau==NULL )
    {
        exit(EXIT_FAILURE);
    }
    nouveau->val=nombre;
    nouveau->suiv=NULL;
    if(f->premier!=NULL)
    {
        Listes *liste=f->premier;
        while(liste->suiv!= NULL){
            liste=liste->suiv;
        }
        liste->suiv=nouveau;
    }
    else
    {
        f->premier= nouveau;
    }
}
int defilerf(File*f)
{
     if(f== NULL )
    {
        //exit(EXIT_FAILURE);
        return 0;
    }
    int nombredefile=0;
    if(f->premier!= NULL){
        Listes *elementdefile=f->premier;
        nombredefile=elementdefile->val;
        f->premier=elementdefile->suiv;
        free(elementdefile);
    }
    return nombredefile;
}
int  premier(File* f)
{

    if( f->premier==NULL)
    {
        printf("la file est vide");
        return 1;
      //exit(1);
    }
    return f->premier->val;
}
void afficherf(File*f)
{
    if(f==NULL)
    {
        exit(EXIT_FAILURE);
    }
    Listes *eltse=f->premier;
    while(eltse !=NULL)
    {
        printf("[%d]<-",eltse->val);
        eltse =eltse->suiv;
    }

}
void creefilefs(Files *file)
{
	file->tete = -1;
	file->queu = -1;
	//return file;
}
void enfilerfS(Files *file,int val)
{
	if(file->tete == -1 && file->queu == -1)
	{
		file->tete++;
		file->queu++;
		file->Tab[file->tete]=val;
		file->Tab[file->queu]=val;
	}
	else
	{
          file->queu++;
		  file->Tab[file->queu] = val;
	}

}
int defilerfS(Files *file)
{
	if(file->tete == -1 && file->queu == -1)
	{
		return 0;
	}
	else
	{
		file->tete++;
	}

}
void afficherfs(Files *file)
{
	int cmpteur;
	cmpteur = file->tete;
	if(cmpteur == -1)
	{
		cmpteur = 0;
	}

	printf("\n\n ->");
	while(cmpteur < 7 && file->Tab[cmpteur] != 0 )
	{
		printf("[%d]",file->Tab[cmpteur]);
		cmpteur++;
	}
	//printf("");
}
int queu (Files*f)
{
     if(f->queu == -1)
    {
        printf("la file est vide");
        return 1;
      //exit(1);
    }
    return f->Tab[f->queu] ;
}
int tete(Files*f)
{
     if(f->tete == -1)
    {
        printf("la file est vide");
        return 1;
      //exit(1);
    }
    return f->Tab[f->tete] ;
}
