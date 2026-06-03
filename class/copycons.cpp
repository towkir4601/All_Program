#include<iostream>
using namespace std;
class towkir{
    int data;
    public:
    towkir(int val){
        data = val;
    }
    towkir(const towkir &obj){
        data = obj.data;
        cout << "Copy Constructor Called!" << endl;
    }
    void disply(){
        cout << "The value is : "<< data << endl;
    }
};
int main(){
    towkir obj1(100);
    towkir obj2 = obj1;
    obj1.disply();
    obj2.disply();
}