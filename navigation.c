#include<stdio.h>
int arr[30][30];
int max_fun(int a,int b,int c){
    return (a>=b)?((a>=c)?a:c):((b>=c)?b:c);
}
int find(int i,int j,int r,int c){
    int max,res[3]={0};
    if(j>=c)
        return 0;
    else{
        if(i-1<r&&i-1>=0)
            res[0]=find(i-1,j+1,r,c);
        if(i<r&&i>=0)
            res[1]=find(i,j+1,r,c);
        if(i+1<r&&i+1>=0)
            res[2]=find(i+1,j+1,r,c);
        max=arr[i][j]+max_fun(res[0],res[1],res[2]);
        return max;
    }
}
int main(){
    int row,col,i,j,res[3]={0},max;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<row;i++)
        res[i]=find(i,0,row,col);
    max=max_fun(res[0],res[1],res[2]);
    printf("%d",max);
}
