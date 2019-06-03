#include<stdio.h>
int main(){
    int num[100],i=0;
    for(i=0;;i++){
        scanf("%d",&num[i]);
        if(num[i]==-1)
            break;
    }
    printf("end");

}
