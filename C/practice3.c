#include<stdio.h>
#include<string.h>
int main(){
char t[20];
char s[20];
printf("Enter First Name :");
fgets(t,sizeof(t),stdin);
printf("Enter Second Name :");
fgets(s,sizeof(s),stdin);
int d=strcmp(t,s);
if(d==0)
printf("Strings are equal\n");
else
printf("Strings are not equal\n");

    return 0;
}