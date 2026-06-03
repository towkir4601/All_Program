#include<iostream>
using namespace std;
class box{
    int length;
    public:
    box(int a){
        length = a;
    }
    friend int get(box b);
};
    int get(box b){
         return b.length + 5; 
    }
int main(){
    int x;
    cout << "Enter a Number : " ;
    cin >> x;
    box b(x);
    cout << "The Box Length is : "<< get(b) << endl;


return 0;
}