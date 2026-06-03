#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age:";
cin>>age;
switch(age){
case 18:
cout<<"you are adult"<<endl;
break;
case 15:
cout<<"you are 15"<<endl;
break;
default:
cout<<"No special cases"<<endl;
break;
}
return 0;
}