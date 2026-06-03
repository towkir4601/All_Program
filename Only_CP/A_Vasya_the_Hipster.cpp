#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>> a;
    cin>> b;
    if(a>b){
        cout<<b<<" ";
        c=a-b;
        d=c/2;
        cout<<d;
    }else{
        cout<<a<<" ";
        c=b-a;
        d=c/2;
        cout<<d;
    }
return 0;
}