#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
         if(t % 3 == 0){
            cout<<"Second"<<endl;
        }
        else if(t % 3 == 1 || t % 3 == 2){
            cout<<"First"<<endl;
        }
    }
return 0;
}   