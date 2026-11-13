#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5
#define TAILLE_NOM 30

void afficherEtudiants(char noms[NB_ETUDIANTS][TAILLE_NOM],
                       float notes[NB_ETUDIANTS])
{
    printf("\n--- Resultats ---\n");

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("%s : %.2f/20\n", noms[i], notes[i]);
    }
}

float calculerMoyenne(float notes[NB_ETUDIANTS])
{
    float somme = 0;

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        somme += notes[i];
    }

    return somme / NB_ETUDIANTS;
}

float meilleureNote(float notes[NB_ETUDIANTS])
{
    float max = notes[0];

    for (int i = 1; i < NB_ETUDIANTS; i++)
    {
        if (notes[i] > max)
        {
            max = notes[i];
        }
    }

    return max;
}

void rechercherEtudiant(char noms[NB_ETUDIANTS][TAILLE_NOM],
                         float notes[NB_ETUDIANTS])
{
    char recherche[TAILLE_NOM];
    int trouve = 0;

    printf("\nNom de l'etudiant a rechercher : ");
    scanf("%29s", recherche);

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        if (strcmp(noms[i], recherche) == 0)
        {
            printf("%s a obtenu %.2f/20\n",
                   noms[i], notes[i]);
            trouve = 1;
            break;
        }
    }

    if (trouve == 0)
    {
        printf("Etudiant introuvable.\n");
    }
}

int main()
{
    char noms[NB_ETUDIANTS][TAILLE_NOM];
    float notes[NB_ETUDIANTS];

    for (int i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("Nom de l'etudiant %d : ", i + 1);
        scanf("%29s", noms[i]);

        printf("Note de %s : ", noms[i]);
        scanf("%f", &notes[i]);
    }

    afficherEtudiants(noms, notes);

    printf("\nMoyenne de la classe : %.2f/20\n",
           calculerMoyenne(notes));

    printf("Meilleure note : %.2f/20\n",
           meilleureNote(notes));

    rechercherEtudiant(noms, notes);

    return 0;
}