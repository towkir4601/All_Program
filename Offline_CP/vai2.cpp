#include<iostream>
using namespace std;
int main(){
    int t,i=1;
    cin>>t;
    while(i!=t){
        if(t%i==0){
            cout<<i<<endl;           
        }
        i++;
    }
    cout<<t<<endl;
return 0;
}