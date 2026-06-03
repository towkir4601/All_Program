#include<stdio.h>
int main(){
    int n,t;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&t);
char k[5];
sprintf(k,"%d",t);
int s=(k[0]-'0')+(k[1]-'0');
printf("%d\n",s);
}
    return 0;
}