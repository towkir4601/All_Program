#include<iostream>
using namespace std;
int main(){
    int age;
cout<<"Enter a Age:";
cin>>age;
if((age<18)&&(age>0)){
    cout<<"You Can not join the party"<<endl;
}
else if(age==18){
    cout<<"You are a KID"<<endl;
}
else{
    cout<<"you can come to the party"<<endl;
}
return 0;
}