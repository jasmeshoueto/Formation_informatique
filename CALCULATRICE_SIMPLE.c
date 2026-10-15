#include <stdio.h>
int main(){
    double nombre1,nombre2;
    printf("Entrez le premier nombre: ");
    scanf("%lf",&nombre1);
    printf("Entrez le second nombre: ");
    scanf("%lf",&nombre2);
    printf("%f+%f= %f\n",nombre1,nombre2,nombre1+nombre2);
    printf("%f-%f= %f\n",nombre1,nombre2,nombre1-nombre2);
    printf("%f*%f= %f\n",nombre1,nombre2,nombre1*nombre2);
    printf("La moyenne de %f et %f est %f\n",nombre1,nombre2,(nombre1+nombre2)/2);
    return 0;

}
