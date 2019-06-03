 #include<conio.h>
 #include<stdio.h>
 int a[100][100];
void main()
  {
    int i,j,k,n,temp;
    scanf("%d",&n);
    for(k=0;k<2;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++){
                scanf("%d",&temp);
                a[i][j]=a[i][j]+temp;
                }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
