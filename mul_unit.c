#include<stdio.h>
int main(){
int en,st,i,n,temp;
scanf("%d %d %d",&st,&en,&n);
for(i=en;i>=st;i--){
    if(!(i%n)){
        temp=i%10;
        printf("%d ",i*temp);
    }
}
return 0;
}
