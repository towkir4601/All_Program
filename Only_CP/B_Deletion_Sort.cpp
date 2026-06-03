#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[11];
        int sor=1;
        for(int i=0;i<n;i++){
            cin >> a[i];   
            if(i>0&&a[i-1]>a[i]){
                sor=0;
            }
        }
        if(sor==1){
            cout<<n<<endl;
        } else {
            cout<<1<<endl;
        }
    }
    return 0;
}