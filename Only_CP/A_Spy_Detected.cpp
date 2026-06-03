#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int t;
        if(arr[0]==arr[1]||arr[0]==arr[2])
            t=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]!=t){
                cout<<i+1<<endl; 
                break;
            }
        }
    }

    return 0;
}