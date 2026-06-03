#include<iostream>
#include<string>
using namespace std;
int main(){
string s,k,t;
cin>>s>>k>>t;
string com=s+k;
sort(com.begin(),com.end());
sort(t.begin(),t.end());
if(com==t){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
return 0;
}