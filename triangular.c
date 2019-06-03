#include<stdio.h>
int main(){
int n,x,i,j=1,line=1,c=1,k;
scanf("%d %d",&n,&x);
for(i=1;i<=n;i++,line=j,c++){
    for(j=line,k=1;k<=c;j++,k++){
        if(j%x==0)
            printf("* ");
        else
            printf("%d ",j);
    }
    printf("\n");

}
return 0;
}
