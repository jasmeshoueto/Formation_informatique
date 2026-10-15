#include<stdio.h>
int main(){
    int nombre;
    printf("Entrez le nombre a analyser: ");
    scanf("%d",&nombre);
    if(nombre<0){
        printf("Ce nombre est negatif");
    }
    else if(nombre>0){
        printf("Ce nombre est positif");
    }
    else{
        printf("Ce nombre est nul");
    }
    if(nombre%2==0){
        printf(" et il est pair.");
    }
    else{
        printf(" et il est impair.");
    }
    return 0;
}