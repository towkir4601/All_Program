#include<iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        if(a>b){
            c=a-b;
        }else{
            c=b-a;
        }
        cout<<c<<endl;
    }
return 0;
}