#include<stdio.h>
#include<stdlib.h>
void initTab(int taille,int tab[]){
    int i=0;
    while(i<taille){
        printf("Entrez l'element %d de votre tableau: ",i);
        scanf("%d",&tab[i]);
        i++;
    }
    printf("\n\n");

}
void afficheTab(int taille,int tab[]){
    int i=0;
    while(i<taille){
    printf("tab[%d]= %d\n\n",i,tab[i]);
    i++;
     }
}
int calculerSomme(int taille,int tab[]){
    int i=0;
    int somme=0;
    while(i<taille){
        somme+=tab[i];
        i++;
    }
    return somme;
}
double calculerMoyenne(int taille,int tab[]){
    int i=0;
    int somme=0;
    double moyenne;
    while(i<taille){
        somme+=tab[i];
        i++;   
    }
    moyenne=(double)somme/taille;
    return moyenne;
}
int trouverMax(int taille,int tab[]){
    int i=0;
    int max=tab[0];
    while(i<taille){
        if(tab[i]>max){
            max=tab[i];
        }
        i++;
    }
    return max;
}
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