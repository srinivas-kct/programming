#include<stdio.h>
int main(){
    int num,safe,rem,sum=0,pro=1;
    scanf("%d",&num);
    safe=num;
    while(num){
        rem=num%10;
        sum+=rem;
        pro*=rem;
        num/=10;
    }
    if(safe%2==0)
        printf("%d",sum);
    else
        printf("%d",pro);
    return 0;
}
