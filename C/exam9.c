#include<stdio.h>
#include<string.h>
struct books{
char name[50];
char author[50];
int price;
};
int main(){
struct books s1;
strcpy(s1.name,"Cyber Security");
strcpy(s1.author,"MD.Towkir Ahmed Sajol");
s1.price=500;
printf("The Book Name Is:%s\n",s1.name);
printf("The Book Author Is:%s\n",s1.author);
printf("The Book price Is:%d\n",s1.price);

    return 0;
}