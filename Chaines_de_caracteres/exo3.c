#include<stdio.h>
#define TVA 18
#define PRIX 5000
#define PTVA ((PRIX*TVA)/100)
#define TTC PRIX+((PRIX*TVA)/100)
int main(){
    printf("Prix initial:%d\n",PRIX);
    printf("Montant de la TVA:%d\n",PTVA);
    printf("Montant TTC:%d\n",TTC);
    return 0;
}