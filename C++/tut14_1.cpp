#include<iostream>
using namespace std;
struct employee
{
    int nid;
    char name;
    float salary;

};

int main(){
    struct employee NLST;
    NLST.nid=1928;
    NLST.name='T';
    NLST.salary=100000.0000;
    cout<<"The NID Number is: "<<NLST.nid<<endl;
    cout<<"The Name is: "<<NLST.name<<endl;
    cout<<"The Salary is: "<<NLST.salary<<endl;
return 0;
}