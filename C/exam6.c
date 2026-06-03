#include<stdio.h>
int main(){
int x,remainder,reverse=0;
printf("Enter a number:");
scanf("%d",&x);
int original=x;
while(x!=0){
    remainder=x%10;
    reverse=reverse*10+remainder;
    x=x/10;
}
if(original==reverse){
printf("This Is Palaindrom\n");}
else{
printf("Not Palaindrom\n");}
return 0;
}