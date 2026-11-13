#include <stdio.h>
#include <string.h>

#define NB_CONTACTS 5
#define TAILLE_NOM 30

void afficherContacts(char contacts[NB_CONTACTS][TAILLE_NOM])
{
    printf("\n--- Liste des contacts ---\n");

    for (int i = 0; i < NB_CONTACTS; i++)
    {
        printf("%d. %s\n", i + 1, contacts[i]);
    }
}

void rechercherContact(char contacts[NB_CONTACTS][TAILLE_NOM])
{
    char recherche[TAILLE_NOM];
    int trouve = 0;

    printf("\nNom a rechercher : ");
    scanf("%29s", recherche);

    for (int i = 0; i < NB_CONTACTS; i++)
    {
        if (strcmp(contacts[i], recherche) == 0)
        {
            printf("%s a ete trouve !\n", recherche);
            trouve = 1;
            break;
        }
    }

    if (trouve == 0)
    {
        printf("%s n'existe pas dans les contacts.\n", recherche);
    }
}

void afficherLongueurs(char contacts[NB_CONTACTS][TAILLE_NOM])
{
    printf("\n--- Longueur des noms ---\n");

    for (int i = 0; i < NB_CONTACTS; i++)
    {
        printf("%s : %zu caracteres\n",
               contacts[i], strlen(contacts[i]));
    }
}

int main()
{
    char contacts[NB_CONTACTS][TAILLE_NOM];

    for (int i = 0; i < NB_CONTACTS; i++)
    {
        printf("Entrez le contact %d : ", i + 1);
        scanf("%29s", contacts[i]);
    }

    afficherContacts(contacts);
    rechercherContact(contacts);
    afficherLongueurs(contacts);

    return 0;
}