#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    long int n[t];
    for(int i = 0; i<t ; i++) 
    cin >> n[i] ;
    for(int i = 0; i<t ; i++){
        long int div = n[i] / 2020;
        long int rem = n[i] % 2020;
        if( div >= rem) cout <<"YES"<<endl;
        else cout << "NO" <<endl;
    }
}