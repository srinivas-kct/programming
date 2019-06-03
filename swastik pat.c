#include<stdio.h>
int main(){
int n,i,j,k,half,temp;
scanf("%d",&n);
half=(n/2)+1;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==half||j==half){
            temp=i+j-1;
            printf("%d",(temp>n)?(2*n-temp):temp);
        }
        else if(i==1&&j>half)
            printf("%d",2*half-j);
        else if(i==n&&j<half)
            printf("%d",j);
        else if(j==1&&i<half)
            printf("%d",i);
        else if(j==n&&i>half)
            printf("%d",2*half-i);
        else
            printf("*");
    }
    printf("\n");
}
}
