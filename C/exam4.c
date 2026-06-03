#include<stdio.h>
   typedef struct student
    {
    int id;
    char name;
    float markm;
    float marke;
    float markb;
    float markc;
    float markh;
    };
int main(){
    struct student gstu;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&gstu.id);
        scanf("%c",&gstu.name);
        scanf("%f",&gstu.markm);
        scanf("%f",&gstu.marke);
        scanf("%f",&gstu.markb);
        scanf("%f",&gstu.markc);
        scanf("%f",&gstu.markh);
    }
        printf("%d",gstu.id);
        printf("%c",gstu.name);
        printf("%f",gstu.markm);
        printf("%f",gstu.marke);
        printf("%f",gstu.markb);
        printf("%f",gstu.markc);
        printf("%f",gstu.markh);
    return 0;
}