#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin>>t;  
        int k[t];
        for(int i=0;i<t;i++){
            cin>>k[i];
        }  
        int count=0;
        int towkir=0; 
        for(int i=0;i<t;i++){
            if(k[i]==0){
                count++;
                 if(count>towkir)
              towkir=count;
            }
            else{
                count=0;
            }
        }  
        cout<<towkir<<endl;
    }
    return 0;
}