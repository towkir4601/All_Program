#include<stdio.h>
int main(){
int n[50];
int t,event=0,oddt=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
    scanf("%d",&n[i]);
    if(n[i]%2==0){
       event=event+n[i];
    }else{
        oddt=oddt+n[i];
    }
}
printf("%d\n",event);
printf("%d\n",oddt);
return 0;
}
