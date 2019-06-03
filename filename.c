#include<stdio.h>
#include<string.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    char *name,exten[10],temp[10],maxi[100],type[]={'c'};
    scanf("%s",temp);
    char *ch;
    ch=strtok(temp,".");
    while(ch!=NULL){
        printf("\n%d",ch);
        name=ch;
        ch=strtok(NULL,".");
        i++;
    }
    printf("\n%s.%s",name[0],name[1]);



}


