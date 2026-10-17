#include<stdio.h>
#include<stdlib.h>
int carre(int nombre){
    return nombre*nombre;
}
int main(){
    int nombreEntre;
    printf("Entrez le nombre: ");
    scanf("%d",&nombreEntre);
    printf("Le carre de %d est %d",nombreEntre,carre(nombreEntre));
    return 0;
}