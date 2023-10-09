#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

typedef struct listes Listes;
struct listes
{
    int val;
    Listes *suiv;
};
typedef struct file File;
struct file{
    Listes *premier;
};
typedef struct Files
{
	int tete;
	int queu;
	int Tab[5];
}Files;

void creefile(File *f);
int dernier(File*f);
void enfilerf(File *f,int nombre);
int defilerf(File*f);
int  premier(File* p);
void afficherf(File*f);
void creefilefs(Files*file);// Creation de la file
void enfilerfS(Files *files,int val);// Inserer des elements dans la file
void afficherfs(Files *files); // Affiche la file existente
int defilerfS(Files *files);// supprime la tete de la file quand elle existe
//Files POP_file_S(Files *file);// vide totalement la file
int queu (Files*f);
int tete(Files*f);

#endif // FILE_H_INCLUDED
