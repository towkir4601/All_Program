#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    int n;
    cout << "Enter the number of employee: ";
    cin >>n;
    for (int i = 1; i <=n; i++)
    {
        
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
