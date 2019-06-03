#include<stdio.h>
int val,half;
void printFun(int n){
int i;
for(i=0;i<n;i++)
    printf("_");
printf("*");
}
int main(){
int val,n,i,j,st,en,mod,flag=1;
scanf("%d",&val);
half=(val/2)+1;
n=((val-2)*(val/2))+1;
st=half-2;//3
mod=st;//3
en=0;
for(i=1;i<=n;i++){
    printFun(st);
    printFun(en);
    printf("\n");
    flag=((st==0)?0:((st==mod)?1:flag));
    if(flag){
        st--;
        en+=2;
    }
    else{
        st++;
        en-=2;
    }
}
}
