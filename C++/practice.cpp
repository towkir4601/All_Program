#include<iostream>
using namespace std;
class baseclass{
    public:
    int base_var;
    void display(){
        cout << "The value of base variable: "<<base_var<< endl;
    }
};
class drived : public baseclass{
    public:
    int drived_var;
    void display(){
        cout <<"The value of base_var: "<< base_var<< endl;
        cout <<"The value of drived_var: "<< drived_var<< endl;
    }
};
int main(){
baseclass *base_pointer;
baseclass obj_base;
drived obj_drived;
base_pointer = & obj_drived;
// base_pointer->base_var = 34;
// base_pointer->display();
base_pointer->base_var = 3400;
base_pointer->display();
drived *drived_pointer;
drived_pointer = &obj_drived;

drived_pointer->drived_var = 90;
drived_pointer->display();


return 0;
}