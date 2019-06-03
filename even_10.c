#include<stdio.h>
int main(){
    int n,i,rem;
    scanff("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]==10)
            break;
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
    return 0;
}
