#include <iostream>
using namespace std;
class dynamic
{
    int *ptr;
public:
    dynamic(int val)
    {
        ptr = new int;
        *ptr = val;
    }
    void disply()
    {
        cout << "The Value is : " << *ptr << endl;
    }
};
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    dynamic obj1(n);
    obj1.disply();
}