#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
int t;
cin>>t;
int s[t];
for(int j=0;j<t;j++){
for(int i=0;i<t;i++){
cin>>s[i];
}
    for(int i=0;i<=t;i++){
        if(s[i]>s[i+1]){
            cout<<"Alice"<<endl;
            
        }else{
            cout<<"Bob"<<endl;
         
        }
        
    }

      }
   
}



return 0;
}