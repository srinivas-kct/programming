#include<stdio.h>
#include<string.h>
int main(){
char s[100];
scanf("%s",s);
int i,j,f=0,close=0,open=0;
for(i=0;i<strlen(s);i++){
    if(s[i]=='(')open++;
    if(s[i]==')')close++;
}
for(i=0;i<strlen(s);i++){
    if(s[i]=='('&&!isalpha(s[i])){
        if(close>0)
        close--;
        else
            s[i]='*';
       }
    if(s[i]==')'&&!isalpha(s[i])){
        if(open>0)
        open--;
        else
            s[i]='*';
    }
}
for(i=0;i<strlen(s);i++){
    if(s[i]!='*')
        printf("%c",s[i]);
}
}
