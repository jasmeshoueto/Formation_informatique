#include<stdio.h>
int main(){
    int N,somme=0,i=0;
    printf("Entrez le nombre n: ");
    scanf("%d",&N);
    if (N>=0){
    while(i<=N){
        somme +=i;
        i++;
    }
    printf("La somme des %d premiers entiers naturels est %d.",N,somme);
  }
  else{
    printf("Le programme marche uniquement avec des nombres positifs.Desole,Au revoir!");
  }  
}