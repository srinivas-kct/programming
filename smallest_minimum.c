#include<stdio.h>
#include<math.h>
int main(){
long long num=9901,safe,result=0,div=1;
int check,zero_count=1,flag=0,rem;
for(check=0;check<=9;check++){
    safe=num;
    while(safe){
        rem=safe%10;
        safe=safe/10;
        if(rem==check){
        if(rem==0){
            zero_count*=10;
            flag=1;
        }
        else{
            result=(result*10)+rem;
            div=div*10;
        }
        }
    }
}
if(flag){
    div=div/10;
    safe=(result/div);
    rem=result%div;
    result=(safe*div*zero_count)+rem;
}
printf("%lld",result);
}
