#include<stdio.h>
#include<conio.h>
int isFibbo(int num){
int sum,first=1,second=1,iterator;
if(num==0||num==1)
    return 1;
if(num<0)
    return 0;
while(1){
    sum=first+second;
    first=second;
    second=sum;
    if(num==second)
        return 1;
    else if(second>num)
        return 0;
}
}
void main(){
char temp;
int number;
while(scanf("%d%c",&number,&temp)){
    if(isFibbo(number))
        printf("%d ",number);
    if(temp=='\n')break;
}
}
