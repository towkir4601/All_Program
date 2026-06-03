#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int t[n];
    cin>>t[0];
    int max=t[0];
    int min=t[0];
    for(int i=1;i<n;i++){
        cin>>t[i];
        if(t[i]>max){
            count++;
            max=t[i];
        }
        else if(t[i]<min){
            count++;
            min=t[i];
        }
    }
    cout<<count<<endl;
return 0;
}