#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl;
    cin>>np;
    int total_drink = (k * l) / nl;
        int total_limes = c * d;   
        int total_salt = p / np; 
        int min_toasts = min({total_drink, total_limes, total_salt});
        int ans = min_toasts / n;
        cout << ans << endl;
return 0;
}