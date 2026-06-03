#include<iostream>
using namespace std;
int main(){
    int marks[]={77,89,90,100};
    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    
return 0;
}