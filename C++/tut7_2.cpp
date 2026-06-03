#include<iostream>
using namespace std;
int main(){
int a=45;
float b=45.46;
cout<<"The Value Is:"<<a+b<<endl;
cout<<"The Value IS:"<<a+int(b)<<endl;
cout<<"The Value Is:"<<a+(int)b<<endl;

    return 0;
}