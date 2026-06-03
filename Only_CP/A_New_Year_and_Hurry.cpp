#include<iostream>
using namespace std;
int main(){
    int n,k,slove=0,p=0;
    cin>> n;
    cin>> k;
    for(int i=1;i<=n;i++){
        if(p+(5 * i)<=(240-k) ){
             p=p + (5 * i);
            slove = i;
        }
    }
    cout<<slove<<endl;
return 0;
}