#include "BSD.h"



/** Menu Prinicipale **/

int menu_initialisation()
{
    int choix;

    do
    {
        printf("******* Menu d'initalisation des Fournisseurs ******* \n");
        printf("\t- %d : Saisir Fournisseur au clavier \n",SAISIR_LISTE_CLIENT);
        printf("\t- %d : Charger la liste des fournisseurs � partir d'un fichier \n",SAISIE_A_PARTIR_DE_FICHIER);
        printf("\t- %d : Charger la liste des fournisseurs � partir d'une BD \n",SAISIE_A_PARTIR_DE_BD);
        printf("\t- %d : Quitter \n",QUITTER);
        printf("Introduire choix : ");
        scanf("%d",&choix);
        fflush(stdin);
        switch(choix)
        {
        case(SAISIR_LISTE_CLIENT):
            break;
        case(SAISIE_A_PARTIR_DE_FICHIER):
            break;
        case(SAISIE_A_PARTIR_DE_BD):
            break;
        case(QUITTER) :
            break;
        default :
            printf("Option de choix incorrecte !!!\n");
            break;
        }
    }
    while(choix!=QUITTER &&
            choix!=SAISIR_LISTE_CLIENT &&
            choix!=SAISIE_A_PARTIR_DE_FICHIER &&
            choix!=SAISIE_A_PARTIR_DE_BD);

    return (choix);
}



int menu_fiche_client()
{

    int choix;


    do
    {

        printf("======= MENU FICHE CLIENT ======== \n ");
        printf("\t- %d  AFFICHER LISTE CLIENT \n",AFFICHER_LISTE_CLIENT);
        printf("\t- %d  RECHERCHE CLIENT \n",RECHERCHE_FICHE_CLIENT);
        printf("\t- %d  INSERER UN CLIENT \n",INSERER_UN_CLIENT);
        printf("\t- %d  SUPPRIMER UN CLIENT\n",SUPPRIMER_UN_CLIENT);
        printf("\t- %d  TRI GENERIQUE \n",TRI_GENERIQUE_CLIENT);
        printf("\t- %d  GESTION CLIENT\n",GESTION_CLIENT);
        printf("\t- %d  QUITTER\n",QUITTER);
        printf("Introduire choix: \n");
        scanf("%d",&choix);
        fflush(stdin);

        switch(choix)
        {
        case(AFFICHER_LISTE_CLIENT):
            break;
        case(RECHERCHE_FICHE_CLIENT):
            break;
        case(TRI_GENERIQUE_CLIENT):
            break;
        case(SUPPRIMER_UN_CLIENT):
            break;
        case(INSERER_UN_CLIENT):
            break;
        case(GESTION_CLIENT):
            break;
        case(QUITTER):
            break;
        default:
            printf("Saisie incorrect !! \n ");
            break;
        }
    }
    while(choix != QUITTER &&
            choix != AFFICHER_LISTE_CLIENT &&
            choix != RECHERCHE_FICHE_CLIENT &&
            choix != GESTION_CLIENT&&
            choix != SUPPRIMER_UN_CLIENT&&
            choix != INSERER_UN_CLIENT&&
            choix != TRI_GENERIQUE_CLIENT);

    return(choix);

}

/**Menu gestion d'un client**/

int menu_gestion_fiche()
{

    int choix_gestion_fiche;

    do
    {



        printf("======= MENU GESTION CLIENT  ======== \n ");
        printf("\t- %d   METTRE A JOUR UN ANNUAIRE \n",MAJ_UN_ANNUAIRE);
        printf("\t- %d   METTRE A JOUR UN CLIENT \n",MAJ_UN_CLIENT);
        printf("\t- %d   QUITTER",QUITTER);
        printf("Introduire choix: ");
        scanf("%d",&choix_gestion_fiche);
        fflush(stdin);
        switch(choix_gestion_fiche)
        {

        case(MAJ_UN_ANNUAIRE):
            break;
        case(MAJ_UN_CLIENT):
            break;
        case(QUITTER):
            break;

        }
    }
    while( choix_gestion_fiche!=MAJ_UN_ANNUAIRE &&
            choix_gestion_fiche!=MAJ_UN_CLIENT &&
            choix_gestion_fiche!=QUITTER);
    return(choix_gestion_fiche);


}

FCLT saisir_fiche_client()
{
    int i=0;
    FCLT client;



    printf("\n");
    printf("==== SAISIE FICHE CLIENT ==== \n");
    printf("\n");
    client.TAB_CLIENT[i]=saisir_client();
    printf("\n");
    printf("==== SAISIE ADRESSE CLIENT ====\n");
    printf("\n");
    client.TAB_ADRESSE_CLIENT[i]=saisir_adresse_client();
    printf("\n");
    printf("==== SAISIE ANNUAIRE ====\n");
    printf("\n");
    client.TAB_ANNUAIRE[i]=saisir_annuaire_client();



    return client;
}

/**Fonction de saisie de l'adresse client **/

CLT saisir_client()
{

    CLT clt;
    printf("\n");
    printf("Saisir le nom : \n");
    fgets(clt.nom,MAX_SIZE_CHARS,stdin);
    printf("Saisir le prenom :\n");
    fgets(clt.prenom,MAX_SIZE_CHARS,stdin);
    printf("Saisir age :\n");
    scanf("%d",&clt.age);
    fflush(stdin);
    printf("Saisir le code Client :\n");
    scanf("%d",&clt.code_client);
    fflush(stdin);
    printf("\n");




    return clt;


}


ADR saisir_adresse_client()
{

    ADR adr;
    printf("Saisir le num�ro de rue : \n");
    scanf("%d",&adr.num);
    fflush(stdin);
    printf("Saisir la Rue :\n");
    fgets(adr.Rue,MAX_SIZE_CHARS,stdin);
    printf("Saisir la ville : \n");
    fgets(adr.Ville,MAX_SIZE_CHARS,stdin);
    printf("Saisir le code Postale : \n");
    scanf("%d",&adr.Code_Postale);
    fflush(stdin);

    return adr;

}


/**Fonctions de saisie d'annuaire client**/


ANR saisir_annuaire_client()
{

    ANR anr;
    printf("Saisir le numero de telephone :\n");
    scanf("%d",&anr.tel);
    fflush(stdin);
    printf("Saisir le code client choisi lors de la saisie fiche client: \n");
    scanf("%d",&anr.code_client);
    fflush(stdin);

    return anr;

}



void saisir_liste_client(FCLT* tabclient,int nb)
{


    for(int i=0 ; i<nb ; i++)
    {
        tabclient[i]=saisir_fiche_client();
    }

}

/** Fonction affichage de fiche client **/





void affiche_client(CLT fiche)
{

    printf("Nom : %s\n", fiche.nom);
    printf("Pr�nom : %s\n", fiche.prenom);
    printf("Age : %d\n", fiche.age);
    printf("Code client : %d\n", fiche.code_client);

}



void affiche_adresse(ADR adresse)
{

    printf("\n");
    printf("ADRESSE : %d %s %s %d \n",adresse.num,adresse.Rue,adresse.Ville,adresse.Code_Postale);
    printf("\n");

}

void affiche_annuaire(ANR annuaire)
{
    printf("\n");
    printf("TELEPHONE : %d \n",annuaire.tel);
    printf("CODE CLIENT : %d\n",annuaire.code_client);
}


void affiche_Fiche_client(FCLT Fclt)
{
    int i;
printf("%d",Fclt.nb);

    for(i=0 ; i<Fclt.nb; i++)
    {
        printf("\n");
        printf("===== FICHE CLIENT =====\n");
        printf("\n");
        affiche_client(Fclt.TAB_CLIENT[i]);
        printf("\n");
        printf("===== ADRESSE CLIENT =====\n");
        printf("\n");
        affiche_adresse(Fclt.TAB_ADRESSE_CLIENT[i]);
        printf("\n");
        printf("===== ANNUAIRE =====\n");
        affiche_annuaire(Fclt.TAB_ANNUAIRE[i]);

    }
}



void affiche_liste_client(FCLT* tabclient,int nb)
{

    for(int i=0 ; i<nb ; i++)
    {
        affiche_Fiche_client(&tabclient[i]);
    }

}


void rechercher_fiche_client()
{





}


void tri_generique_fiche_client()
{





}

void inserer_une_fiche_client()
{





}



void supprimer_une_fiche_client()
{






}

