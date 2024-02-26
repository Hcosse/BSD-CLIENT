#include <stdio.h>
#include <string.h>
#include "BSD.h"

int main()
{
    int choix;
    int choix_init;
    int nb=0;
    FCLT tabclient[MAX_SIZE_TAB];





    do
    {
        choix_init=menu_initialisation();
        switch(choix_init)
        {
        case(SAISIR_LISTE_CLIENT):

            /**Saisie control� du nombre d'�l�ments du tableau tabclient**/
            do
            {
                printf("Saisir le nombre de Fiche Client � creer : ");
                scanf("%d",&nb);
                fflush(stdin);
            }
            while(nb < 1 || nb > MAX_SIZE_TAB);
            saisir_liste_client(tabclient,nb);
            break;
        case(SAISIE_A_PARTIR_DE_FICHIER):
            //PAS POUR CE RENDU
            break;
        case(SAISIE_A_PARTIR_DE_BD):
            //PAS POUR CE RENDU
            break;
        case (QUITTER):
            printf("Au revoir avant l'initialisation !");
            return (0);
            break;
        default :
            printf("Choix incorrect !! ");
            break;
        }

    }
    while(  choix_init != QUITTER &&
            choix_init != SAISIE_A_PARTIR_DE_BD &&
            choix_init != SAISIE_A_PARTIR_DE_FICHIER &&
            choix_init != SAISIR_LISTE_CLIENT);





    do
    {
        choix= menu_fiche_client();
        switch (choix)
        {
        case AFFICHER_LISTE_CLIENT:
            affiche_liste_client(tabclient,nb); // Appel de la fonction pour afficher la liste des clients
            break;
        case RECHERCHE_FICHE_CLIENT:
            break;
        case TRI_GENERIQUE_CLIENT:
            break;
        case SUPPRIMER_UN_CLIENT:
            break;
        case INSERER_UN_CLIENT:
            break;
        case GESTION_CLIENT:
            break;
        // ... d'autres cas pour les autres options de menu ...
        case QUITTER:
            printf("Sortie du menu fiche client.\n");
            break;
        default:
            printf("Choix non valide. Veuillez r�essayer.\n");
            break;
        }
    }
    while(
          choix != QUITTER);  // La boucle continue jusqu'� ce que l'utilisateur choisisse de quitter

}
