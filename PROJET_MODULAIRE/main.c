#include<stdio.h>
#include<stdlib.h>
#include"tableaux.h"


int main(){
    int tailleEntre;
    printf("Entrez la taille du tableau: ");
    scanf("%d",&tailleEntre);
    int tableau[tailleEntre];
    initTab(tailleEntre,tableau);
    afficheTab(tailleEntre, tableau);
    printf("Somme des elements: %d\n\n",calculerSomme(tailleEntre,tableau));
    printf("Moyenne des elements: %.2f\n\n",calculerMoyenne(tailleEntre,tableau));
    printf("Le maximum des elements du tableau est : %d",trouverMax(tailleEntre,tableau));

    return 0;
}