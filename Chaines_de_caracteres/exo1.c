#include<stdio.h>
#include<string.h>
int main(){
    char prenom[]= "Jasmes";
    printf("%s\n",prenom);
    printf("%d caracteres\n",strlen(prenom));
    int i=0;
    while(prenom[i]!='\0'){
        printf("%c\n",prenom[i]);
        i++;
    }
    int compteurv=0;
    for(int i=0;i<strlen(prenom);i++){
        if(prenom[i]=='a'||prenom[i]=='o'||prenom[i]=='e'||prenom[i]=='u'||prenom[i]=='i'||prenom[i]=='y'||
        prenom[i]=='A'||prenom[i]=='O'||prenom[i]=='E'||prenom[i]=='U'||prenom[i]=='I'||prenom[i]=='Y')
            {
                compteurv++;
            }
    }
    printf("%d voyelles",compteurv);


    return 0;
}