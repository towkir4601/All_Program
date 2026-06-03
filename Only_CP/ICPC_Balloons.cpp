#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> k;
        string t;
        cin >> t;
        sort(t.begin(),t.end());
        int count=0;
        for (int j=0;j<k;j++) {
            if (j==0||t[j]!=t[j-1]) {
                count+=2;
            } else {
                count+=1;
            }
        }
        cout << count << endl;
    }
    return 0;
}