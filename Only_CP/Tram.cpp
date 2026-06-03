#include<iostream>
using namespace std;
int main(){
    int n,k,t;
    int current=0;
    int max=0;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>k;
       cin>>t;
       current=current-k+t;
       if(current>max){
        max=current;
       }
    }
    cout<<max<<endl;
return 0;
}