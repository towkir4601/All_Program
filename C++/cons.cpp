#include<iostream>
using namespace std;
class box{
    int length;
    public:
    box(){
        length = 15;
    }
    friend int getlength(box b);
};
    int getlength(box b){
        return b.length+5;
    }
int main(){
    box m;
    cout << "The Box Length is : " << getlength(m) << endl;
return 0;
}