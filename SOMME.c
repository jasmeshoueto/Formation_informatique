#include<stdio.h>
int main(){
    int nombre,somme=0;
    printf("Entrez les nombres dont vous aimeriez faire la somme: ");
    do{
        scanf("%d",&nombre);
        printf("\n");
        somme+=nombre;
    }while(nombre>0);
    printf("La somme est %d.Au revoir!!",somme);
return 0;
}