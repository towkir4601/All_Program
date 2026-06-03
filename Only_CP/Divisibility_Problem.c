#include<stdio.h>
int main(){
int n,t,k,e;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&t);
scanf("%d",&k);
if(t%k==0)
printf("0\n");
else
{
   e=k-(t%k);
   printf("%d\n",e);
}

}
    return 0;
}