#include<stdio.h>
int main(){
int num,i,pro=1,temp;
scanf("%d",&num);
int a[num];
for(i=0;i<num;i++)
    scanf("%d",&a[i]);
for(i=1;i<num;i++){
    temp=a[i-1];
    pro=(temp%10)*((temp/10)%10);
    printf("%d ",pro);

}
return 0;
}
