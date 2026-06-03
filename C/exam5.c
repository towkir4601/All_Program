#include<stdio.h>
int main(){
    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    if((x%4==0&&x%100!=0)||x%400==0)
    printf("Leap year!!!\n");
    else
    printf("Not Leap year!!!\n");

    return 0;
}