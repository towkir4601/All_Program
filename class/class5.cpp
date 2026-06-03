#include<iostream>
using namespace std;
class towkir{
    int a,b,c;
    public : 
    towkir(int x, int y, int z){
        a = x;
        b = y;
        c = z;
    }
    towkir(int x, int y){
        a = x;
        b = y;
        c = 0;
    }
    int sum(int x, int y, int z){
        return x + y + z;
    }
    int sum(int x, int y){
        return x + y;
    }
    void disply(int results){
        cout << "The Sum is : "<< results << endl;
    }
    // int sum(){
    //     return a + b + c;
    // }
    // void disply(){
    //     cout << "The Sum is :" << sum() << endl; 
    // }
};
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    towkir obj1(5,5,5);
    obj1.disply(obj1.sum(5,5,5));
    towkir obj2(5,5);
    obj2.disply(obj2.sum(5,5));
return 0;
}