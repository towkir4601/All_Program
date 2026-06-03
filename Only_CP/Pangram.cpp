#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n, count = 0;
    string t;
    cin >> n;
    cin >> t;
    for(int i = 0; i < n; i++){
        t[i] = tolower(t[i]);
    }
    sort(t.begin(), t.end());
    for(int j = 0; j < n; j++){
        if(t[j] != t[j+1]){
            count++;
        }
    }
    if(count == 26){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}