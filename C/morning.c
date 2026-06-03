#include<stdio.h>
int fact(int y){
    if (y==0)
    {
      return 1;  /* code */
    }
    
    return fact(y-1)*y;

}
int main(){
    int y;
    printf("Enter a number:");
    scanf("%d",&y);
    int x=fact(y);
    printf("The Factorial Value Is:%d\n",x);
    return 0;
}