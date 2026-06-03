#include<stdio.h>
float total_avr(int a,int b,int c,int d){
return ((a+b+c+d)/4.0);
}
int main(){
    int a,b,c,d;
    float avr;
printf("Enter Four Number:");
scanf("%d%d%d%d",&a,&b,&c,&d);
avr=total_avr(a,b,c,d);
printf("The Ultimate average is:%.2f\n",avr);

    return 0;
}