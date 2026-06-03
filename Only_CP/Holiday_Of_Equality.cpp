#include<iostream>
using namespace std;
int main(){
    int n,mx=0,j=0,sum=0,total_sum=0;
    cin>>n;
   int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(mx<t[i]){
            mx=t[i];
        }
    }
    for(int j=0;j<n;j++){
      sum=mx-t[j]; 
      total_sum=total_sum+sum; 
    }
    cout<<total_sum<<endl;
return 0;
}