#include<stdio.h>
void main(){

int n,x,i,rem,flag=0;
scanf("%d %d",&n,&x);
int num[n],passed[n];
for(i=0;i<n;i++)
    scanf("%d",&num[i]);
for(i=0;i<n;i++){
    rem=(num[i]+x)%10;
    if(rem==5||rem==6)
        passed[i]=num[i]+x;
    else{
        flag=1;
        break;
    }
}
if(flag==1)
    printf("-1");
else{
    for(i=0;i<n;i++)
        printf("%d ",passed[i]);
}


}
