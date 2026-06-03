#include<iostream>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n;
    cin>> k;
    int t[n];
    for(int i = 0 ; i < n ; i++){
        cin>>t[i];
        if(t[i]>5-k){
            continue;
        }else if(t[i]<=5-k){
            count++;
        }
    }
    cout << count/3 << endl;

return 0;
}