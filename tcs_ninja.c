#include<stdio.h>
int main(){
    int n,i,j,r,c,temp,nr;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    n=r/2;
    nr=r-1;
    for(i=0;i<n;i++){
        for(j=0;j<c;j++){
            temp=a[i][j]*a[nr-i][j];
            printf("%d ",temp);
        }
        printf("\n");
    }
    if(r%2){
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
    }
    return 0;
}
