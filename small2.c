#include<stdio.h>
int main(){
long long num=9901,safe,zero=0;
int check,flag=0,rem;
for(check=0;check<=9;check++){
    safe=num;
    while(safe!=0){
        rem=safe%10;
        safe=safe/10;
        if(rem==check){
            if(rem==0){
                zero=zero*10;
                flag=1;
            }
            else if(flag==0){
                zero=(zero*10)+rem;
                }

            else if(flag==1){
                zero=zero*rem;
                flag=0;
            }
        }
    }
}
printf("%lld",zero);
}

