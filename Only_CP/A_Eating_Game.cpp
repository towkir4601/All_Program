#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n[t];
    int arr[t][10];
    for(int i = 0; i<t; i++){
        cin >> n[i];
        for(int j = 0; j<n[i];j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<t;i++){
        int c=0;
        sort(arr[i],arr[i]+n[i]);
        for(int j=0;j<n[i];j++){
            if(arr[i][j]==arr[i][n[i]-1])
            c++;
        }
        cout << c <<endl;
    }

}