#include <stdio.h>
#include <stdlib.h>
#include"PILE.h"


int vide(Pile* p)
{
    return p->sommet==NULL;
}
void creepile(Pile *p)
{
     p->sommet=NULL;
}
int  sommet(Pile* p)
{
    if(vide(p))
    {
        printf("la pile est vide");
        return 1;
      //exit(1);
    }
    return p->sommet->val;
}
void enpiler(Pile *pile,int elt)
{
    Liste *liste=(Liste*)malloc(sizeof(Liste));
	if(pile==NULL||liste==NULL){
        exit(EXIT_FAILURE);
	}
    liste->val=elt;
    liste->suiv=pile->sommet;
    pile->sommet=liste;
}

int depiler(Pile* pile)
{
    if(pile->sommet==NULL){
      //exit(EXIT_FAILURE);
      return 0;
    }
    int etl=pile->sommet->val;
    Liste *tenp=pile->sommet;
    pile->sommet=pile->sommet->suiv;
    free(tenp);
    return etl;
}
void afficher(Pile*p)
{
    if(p==NULL)
    {
        exit(EXIT_FAILURE);
    }
    Liste *eltse=p->sommet;
    while(eltse !=NULL)
    {

        printf(" [%d]-->",eltse->val);
        eltse =eltse->suiv;
    }

}

void creepilefs(Piles*pile)
{
    pile->sommets=-1;
    pile->tete=-1;
}
void enpilerfS(Piles *piles,int val)
{
    if(piles->tete == -1 && piles->sommets == -1)
	{
        piles->tete++;
		piles->sommets++;
		piles->tab[piles->tete]=val;
		piles->tab[piles->sommets]=val;
	}
	else
	{
		   piles->sommets++;
		   piles->tab[piles->sommets] = val;

	}
}
void afficherps(Piles *piles)
{
    int cmpteur;
	cmpteur = piles->tete;
	if(cmpteur == -1)
	{
		cmpteur = 0;
	}
	printf("->");
	while(cmpteur < 5 && piles->tab[cmpteur] != 0 )
	{
		printf("[%d]",piles->tab[cmpteur]);
		cmpteur++;
	}
	printf("\n");

}
int depilerfS(Piles *piles)
{
    if(piles->sommets == -1 )
	{
		return 0;
	}
	else
	{
		piles->sommets--;
	}
}
int sommets(Piles*p)
{
     if(p->sommets == -1)
    {
        printf("la pile est vide");
        return 1;
      //exit(1);
    }
    return p->tab[p->sommets] ;
}
