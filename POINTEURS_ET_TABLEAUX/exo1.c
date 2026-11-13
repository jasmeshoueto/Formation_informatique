#include<stdio.h>
int main(){
    int nombre=25;
    int *point_nombre= &nombre;
    printf("%d\n",nombre);//affichage du nombre
    printf("%d\n",&nombre);//affichage de son adresse mémoire
    printf("%d\n",point_nombre);//affichage de l'adresse mémoire du nombre en passant par le pointeur
    *point_nombre=40;//modification de la valeur du nombre en passant par le poiteur
    printf("%d",nombre);//affichage de la nouvelle valeur
    return 0;
}