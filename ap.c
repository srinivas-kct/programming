#include<stdio.h>
int main(){
int i,n,s,d;
scanf("%d %d %d",&n,&s,&d);
for(i=s;i<=n*d;i=i+d){
    printf("%d\n",i);
}

}
