#include<stdio.h>
#include<string.h>
struct students{
char name[50];
int roll;
float cgpa;

};
int main(){
    struct students cse[3];
    printf("Enter First Student Name:\n");
    gets(cse[0].name);
    printf("Enter First Student Roll:\n");
    scanf("%d",&cse[0].roll);
    printf("Enter First Student cgpa:\n");
    scanf("%f",&cse[0].cgpa);
    printf("Enter Second Student Name:\n");
    scanf("%s",&cse[1].name);
    printf("Enter Second Student Roll:\n");
    scanf("%d",&cse[1].roll);
    printf("Enter Second Student cgpa:\n");
    scanf("%f",&cse[1].cgpa);
    printf("%s\n",cse[0].name);
    printf("%d\n",cse[0].roll);
    printf("%.2f\n",cse[0].cgpa);
    printf("%s\n",cse[1].name);
    printf("%d\n",cse[1].roll);
    printf("%.2f\n",cse[1].cgpa);
    return 0;
}