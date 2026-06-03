#include<iostream>
using namespace std;
int main(){
    int n;
    int a,b,c;
    cin>>n;
    while(n--){
        cin>>a;
        cin>>b;
        cin>>c;
        if( a<b && b<c){
            cout<<"STAIR"<<endl;
        }
        else if( a<b && b>c){
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }
return 0;
}