#include<iostream>
using namespace std;
class number{
    private:
    int value;
    public:
    number(){
        value = 0;
    }
    number(int i){
        value = i;
    }
    number operator + (number obj){
        number temp;
        temp.value = value + obj.value;
        return temp;
    }
    void print(){
        cout << value << endl;
    }
    
};
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    number n1(10);
    number n2(10);
    number n3(10);
    number n4(10);
    number n5(10);
    number n6 = n1+n2+n3+n4+n5;
    n6.print();

return 0;
}