#include<stdio.h>
int main(){
int num,x,safe,sum=0,rem;
scanf("%d %d",&num,&x);
safe=num;
while(safe){
    rem=safe%10;
    sum+=rem;
    safe/=10;
}
sum*=x;
printf("%d",sum);
return 0;
}
