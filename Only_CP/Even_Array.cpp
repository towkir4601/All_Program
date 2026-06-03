#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n;
        cin >>n;
        int a[n];
        for (int j=0;j<n;j++) {
            cin >> a[j];
        }
        int wrong_even =0;
        int wrong_odd =0; 
        for (int i=0;i<n;i++) {
            if(i%2!=a[i]%2) {
                if(i%2==0){
                    wrong_even++;
                } else {
                    wrong_odd++;
                }
            }
        }
        if (wrong_even==wrong_odd) {
            cout<<wrong_even<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}