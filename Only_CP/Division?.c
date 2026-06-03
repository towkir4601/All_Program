#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
for (int i = 0; i < n; i++)
{
  scanf("%d",&t) ;
  if(t<=1399) 
  printf("Division 4\n");
if(t>=1400&&t<=1599)
printf("Division 3\n");
if(t>=1600&&t<=1899)
printf(" Division 2\n");
if(t>=1900)
printf("Division 1\n");
}
    return 0;
}