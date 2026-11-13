//-----------------TABLEAU DE NOMS-----------------------
#include<stdio.h>
#include<string.h>
int main(){
    char prenoms[5][20]={"Degnon","Jasmes","Frejus","Shalom","Pruneldie"};
    for(int i=0;i<5;i++){
        printf("%s\n",prenoms[i]);
    }
    char prenomentre[20];
    printf("\nEntrez un prenom: ");
    scanf("%s",&prenomentre);
    int trouve=0;
    for(int i=0;i<5;i++){
            if(strcmp(prenoms[i],prenomentre)==0){
                     trouve++;       }
            
    }
    if(trouve>0){
        printf("\n%s est dans le tableau",prenomentre);
    }else{
        printf("\n%s n'est pas dans le tableau",prenomentre);
    }





    return 0;
}