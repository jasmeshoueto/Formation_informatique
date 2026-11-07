#include<stdio.h>
int main(){
    int tableau[5]={10,20,30,40,50};
    //affichage du tableau à l'aide des pointeurs 
    int *pointeur=&tableau[0];
        printf("%d\n",*pointeur);
        printf("%d\n",*(pointeur+1));
        printf("%d\n",*(pointeur+2));
        printf("%d\n",*(pointeur+3));
        printf("%d\n",*(pointeur+4));
    // affichage des adresses mémoires de chaque élément    
        printf("%d\n",pointeur);
        printf("%d\n",pointeur+1);
        printf("%d\n",pointeur+2);
        printf("%d\n",pointeur+3);
        printf("%d\n",pointeur+4);

    //somme des éléments grâce au pointeur
    int i=0;
    int somme =0;
    while(i<5){
        
    somme+=*pointeur;
    pointeur++;
    i++;
    }
    printf("La somme est %d",somme);
    return 0;
}