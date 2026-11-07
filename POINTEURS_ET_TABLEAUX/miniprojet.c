#include <stdio.h>

#define NOMBRE_ETUDIANTS 5

// Fonction pour afficher les notes
void afficherNotes(float *notes, int taille)
{
    printf("\n--- NOTES DES ETUDIANTS ---\n");

    for (int i = 0; i < taille; i++)
    {
        printf("Etudiant %d : %.2f/20\n", i + 1, *(notes + i));
    }
}

// Fonction pour calculer la moyenne
float calculerMoyenne(float *notes, int taille)
{
    float somme = 0;

    for (int i = 0; i < taille; i++)
    {
        somme += *(notes + i);
    }

    return somme / taille;
}

// Fonction pour trouver la meilleure note
float meilleureNote(float *notes, int taille)
{
    float meilleure = *notes;

    for (int i = 1; i < taille; i++)
    {
        if (*(notes + i) > meilleure)
        {
            meilleure = *(notes + i);
        }
    }

    return meilleure;
}

// Fonction pour trouver la plus faible note
float plusPetiteNote(float *notes, int taille)
{
    float plusPetite = *notes;

    for (int i = 1; i < taille; i++)
    {
        if (*(notes + i) < plusPetite)
        {
            plusPetite = *(notes + i);
        }
    }

    return plusPetite;
}

int main()
{
    float notes[NOMBRE_ETUDIANTS];

    printf("=== GESTIONNAIRE DE NOTES ===\n");

    // Saisie des notes
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++)
    {
        do
        {
            printf("Entrez la note de l'etudiant %d : ", i + 1);
            scanf("%f", &notes[i]);

            if (notes[i] < 0 || notes[i] > 20)
            {
                printf("Note invalide ! Entrez une note entre 0 et 20.\n");
            }

        } while (notes[i] < 0 || notes[i] > 20);
    }

    // Appels des fonctions
    afficherNotes(notes, NOMBRE_ETUDIANTS);

    printf("\nMoyenne generale : %.2f/20\n",calculerMoyenne(notes, NOMBRE_ETUDIANTS));

    printf("Meilleure note : %.2f/20\n",meilleureNote(notes, NOMBRE_ETUDIANTS));

    printf("Plus faible note : %.2f/20\n",plusPetiteNote(notes, NOMBRE_ETUDIANTS));

    return 0;
}