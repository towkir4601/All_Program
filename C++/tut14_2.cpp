#include<iostream>
using namespace std;
typedef struct employee{
    int nid;
    char name;
    float salary;
}ep;
int main(){
ep NLST;
NLST.nid=32789;
NLST.name='T';
NLST.salary=100000;
cout<<"The NID Number is: "<<NLST.nid<<endl;
cout<<"The Name is: "<<NLST.name<<endl;
cout<<"The Salary is: "<<NLST.salary<<endl;

return 0;
}