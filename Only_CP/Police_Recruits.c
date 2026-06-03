#include<iostream>
using namespace std;
int main(){
int n,count=0,tcount=0;
cin>>n;
int t[n];
for(int i=0;i<n;i++){
    cin>>t[i];
}
for(int j=0;j<n;j++){
  if(t[j]>0){
    count++;
  }
  if(t[j+1]<0){
    count--;
  }
}
cout<<count<<endl;
return 0;
}