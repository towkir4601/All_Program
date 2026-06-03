#include<iostream>
#include<string>
using namespace std;
int main(){
string t;
string k;
cin>>t;
cin>>k;
for(int i=0;i<t.length();i++){
    if(t[i]!=k[i]){
        cout<<"1";
    }else{
        cout<<"0";
    }
}
return 0;
}