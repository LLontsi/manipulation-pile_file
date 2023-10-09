#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

//#define taille 5;
struct liste{
    int val;
    struct liste *suiv;
};typedef struct liste Liste;
struct pile
{
    Liste* sommet;
};typedef struct pile Pile;
typedef struct Piles
{
	int sommets;
	int tete;
	int tab[5];
}Piles;
int vide(Pile* p);
void creepile(Pile *p);
int  sommet(Pile* p);
void enpiler(Pile* p,int elt);
int depiler(Pile* p);
void afficher(Pile*p);
void creepilefs(Piles*pile);
void enpilerfS(Piles *piles,int val);
void afficherps(Piles *piles);
int depilerfS(Piles *piles);
int sommets(Piles*p);
#endif // PILE_H_INCLUDED
