#include<iostream>
using namespace std;
int sum(int a,int b);
void g();
int main(){

    int num1,num2;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"The Sum is: "<<sum(num1,num2)<<endl;
    g();
return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"Good Morning"<<endl;
}