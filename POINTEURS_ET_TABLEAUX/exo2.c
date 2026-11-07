#include<stdio.h>
void echanger(int *point1,int *point2){
    int temp=0;
    temp=*point1;
    *point1=*point2;
    *point2=temp;
    printf("a est maintenant %d et b est maintenant %d",*point1,*point2);

}
int main(){
    int a=15,b=30;
    echanger(&a,&b);
    return 0;
}