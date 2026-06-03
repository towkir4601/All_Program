#include<stdio.h>
int main(){
    int n,l,t;
    scanf("%d",&n);
    scanf("%d",&l);
    int max=0;
    if(n>l){
        max=n;
    }
    else{
        max=l;
    }
    t=6-max+1;
    if(t==1)
 printf("1/6\n");
    else if(t==2)
    printf("1/3\n");
    else if(t==3)
     printf("1/2\n");
    else if(t==4)
     printf("2/3\n");
    else if(t==5)
     printf("5/6\n");
    else if(t==6)
     printf("1/1\n");   
    return 0;
}