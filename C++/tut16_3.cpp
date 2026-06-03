//Call by Pointer..........
#include<iostream>
using namespace std;
void swapt(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int x=4,y=5;
cout<<"The value of X is: "<<x<<" and the value of Y is: "<<y<<endl;
swapt(&x,&y);
cout<<"The value of X is: "<<x<<" and the value of Y is: "<<y<<endl;
return 0;
}