#include<iostream>
using namespace std;
union money{
    int rice;
    char car;
    float taka;
};
int main(){
    union money m1;
    m1.rice=60;
    m1.car=10;
    m1.taka=100;
    cout<<"The Rice Price is:"<<m1.rice<<endl;
    cout<<"The Car is:"<<m1.car<<endl;
    cout<<"The Car Price is:"<<m1.taka<<endl;
return 0;
}