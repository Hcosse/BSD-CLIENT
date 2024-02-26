#ifndef BSD_H
#define BSD_H

#define MAX_SIZE_TAB 100
#define MAX_SIZE_TAB_ANNUAIRE 100
#define MAX_SIZE_TAB_ADRESSE_CLIENT 100
#define MAX_SIZE_CHARS 100
#define MAX_SIZE_TAB_CLIENT 100
#define QUITTER 14




#define AFFICHER_LISTE_CLIENT 2
#define RECHERCHE_FICHE_CLIENT 3
#define TRI_GENERIQUE_CLIENT 4
#define SUPPRIMER_UN_CLIENT 12
#define INSERER_UN_CLIENT 13
#define GESTION_CLIENT 5
#define SAISIR_LISTE_CLIENT 6
#define SAISIE_A_PARTIR_DE_FICHIER 7
#define SAISIE_A_PARTIR_DE_BD 8



#define MAJ_UN_ANNUAIRE 10
#define MAJ_UN_CLIENT 11
#define INSERER_UN_CLIENT 13

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


/**STRUCTURE CLIENT**/

struct client
{

    char nom[MAX_SIZE_CHARS];
    char prenom[MAX_SIZE_CHARS];
    int age;
    int code_client;


};
typedef struct client CLT;



/**STRUCTURE ANNUAIRES**/

struct annuaire
{

    int tel;
    int code_client;

};
typedef struct annuaire ANR;



/** STRUCTURER ADRESSE **/

struct Adresse
{

    int  num;
    char Rue[MAX_SIZE_CHARS];
    char Ville[MAX_SIZE_CHARS];
    int Code_Postale;

};
typedef struct Adresse ADR;




/**STRUCT PRINCIPALE**/

struct fiche_client
{

    int nb;
    CLT TAB_CLIENT[MAX_SIZE_TAB_CLIENT];
    ANR TAB_ANNUAIRE[MAX_SIZE_TAB_ANNUAIRE];
    ADR TAB_ADRESSE_CLIENT[MAX_SIZE_TAB_ADRESSE_CLIENT];



};
typedef struct fiche_client FCLT;




int menu_initialisation();
int menu_fiche_client();
int menu_gestion_fiche();
void affiche_client(CLT fiche);
void affiche_adresse(ADR adresse);
void affiche_annuaire(ANR annuaire);
void affiche_liste_client(FCLT* tabclient,int nb);
void rechercher_fiche_client();
void tri_generique_fiche_client();
void inserer_une_fiche_client();
void supprimer_une_fiche_client();
void saisir_liste_client(FCLT* tabclient,int nb);
void affiche_Fiche_client(FCLT Fclt);
FCLT saisir_fiche_client();
CLT saisir_client();
ANR saisir_annuaire_client();
ADR saisir_adresse_client();

#endif
