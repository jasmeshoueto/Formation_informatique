#include<stdio.h>
#include"tableaux.h" 
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