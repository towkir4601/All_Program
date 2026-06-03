#include<iostream>
using namespace std;
int main(){
    int count=0,n;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=1;i<=n;i++){
        if(t[i]!=t[i-1]){
            count++;
        }
    }
cout<<count<<endl;
return 0;
}