#include<stdio.h>
#include<string.h>
int main(){
char st[1000];
int i,j=0,c=1,k=0,flag=0;
gets(st);
for(i=1;;i++){
    if(flag==1)
        break;
    for(j=0;j<c;j++){
        if(flag==1)
            printf("*");
        else if(st[k+1]=='\0'){
            flag=1;
            printf("%c",st[k]);
        }
        else
            printf("%c",st[k]);
        k++;
    }
    printf("\n");
    c++;
}
return 0;
}
