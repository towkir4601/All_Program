#include<iostream>
using namespace std;
void slove(){
    int t;
    cin >> t;
    if (t <= 2) cout << "0" << endl;
    else {
        int ans = (t - 1)/2;
        cout << ans << endl;
    }
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--){
        slove();
    }

return 0;
}