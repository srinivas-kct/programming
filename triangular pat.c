#include<stdio.h>
void printFun(int n,char ch){
for(int i=0;i<n;i++)
    printf("%c",ch);
}
int main(){
int n,i,j=2;
scanf("%d",&n);
for(i=n-1;i>=0;i--,j=j+2){
    printFun(i,'-');
    printFun(j,'*');
    printFun(i,'-');
    printf("\n");
}
}
