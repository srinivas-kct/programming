#include<stdio.h>
void printfun(int n,char c){
for(int i=0;i<n;i++)
    printf("%c",c);
}
int main(){
int n,con,i,j,st,space=-1;
char ch;
scanf("%d %c",&n,&ch);
con=n*3;
st=n-1;
for(i=1;i<=con;i++){
    if(i>1&&i<=n){
        st--;
        space++;
    }
    else if(i>((2*n)+1) && i<con){
        st++;
        space--;
    }
    for(j=0;j<3;j++,printf("%c",ch)){
        if(i==1||(i>n && i<=2*n)||i==con){
            printfun(n-1,'-');
            j=2;
        }
        else if(j==0)
            printfun(st,'-');
        else
            printfun(space,'-');
    }
printf("\n");}
}
