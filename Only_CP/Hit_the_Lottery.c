#include<stdio.h>
int main(){
  int t,count=0;
   scanf("%d",&t);
    while(t>=100){
        count++;
        t=t-100;
    }
   while(t>=20){
        count++;
        t=t-20;
    }
     while(t>=10){
        count++;
        t=t-10;
    }
    while(t>=5){
        count++;
        t=t-5;
    }
    while(t>=1){
        count++;
        t=t-1;
    }
printf("%d\n",count);
return 0;
}