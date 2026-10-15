#include<stdio.h>
int main(){
    int nombre1,nombre2;
    printf("Entrez le premier nombre: ");
    scanf("%d",&nombre1);
    printf("Entrez le second nombre: ");
    scanf("%d",&nombre2);
    if(nombre1<nombre2){
        printf("%d est le plus grand.",nombre2);
    }
    else if(nombre1>nombre2){
        printf("%d est le plus grand.",nombre1);
    }
    else {
        printf("Les deux nombres sont egaux.");
    }
    return 0;
}