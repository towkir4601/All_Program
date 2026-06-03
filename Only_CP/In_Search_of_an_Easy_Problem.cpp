#include<iostream>
using namespace std;
int main(){
    int t;
    int s;
    int count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        if(s>0){
            count++;
        }
    }
    if(count>0){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }

return 0;
}