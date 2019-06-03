#include<stdio.h>
int main(){
int i,j,con,end,num,alpha=64;
scanf("%d",&num);
con=num;
end=num-1;
for(i=1;i<=num;i++,alpha=64,end--,con++){
    for(j=1;j<=con;j++){
        if(j<=end)
            printf("*");
        else{
            if(j<=num){
                alpha++;
                printf("%c",alpha);

            }
            else{
                alpha--;
                printf("%c",alpha);
            }
        }
    }
    printf("\n");
}
}
