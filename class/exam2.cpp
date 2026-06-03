#include<iostream>
using namespace std;
class bankaccont{
    string name;
    int accontnum;
    double blance;
    public:
    void assain_valur(string num, int acc, double bal){
        name = num;
        accontnum = acc;
        blance = bal;
    }
    void diposit(double val){
        blance = blance + val;
    }
    void disply(){
        cout << "Name : " << name << endl;
        cout << "Blance : " << blance << endl;
    }
};
int main(){
    bankaccont obj;
    obj.assain_valur("Towkir",57399,50);
    obj.diposit(500);
    obj.disply();
}