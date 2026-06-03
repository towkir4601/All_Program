#include<iostream>
using namespace std;
void slove(){
    int k;
    cin >> k;
    if(k==3) cout << "3" << endl;
    else cout << "2" << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        slove();
    }
return 0;
}