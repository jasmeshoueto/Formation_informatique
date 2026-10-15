#include<stdio.h>
int main(){
    int nombre,compteur=0;
    printf("Entrez le nombre: ");
    scanf("%d",&nombre);
    for(int i=1;i<=10;i++){
        if(i%2==0){
            compteur+=1;
        }
    }
    printf("Il y a %d nombres pairs de 1 a %d.",compteur,nombre);

    return 0;
}