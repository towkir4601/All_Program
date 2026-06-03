#include<iostream>
using namespace std;
int main() {
    int n;
    int count = 0;
    // t = বর্তমান বাসিন্দা, k = ধারণক্ষমতা
    int t, k; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> t;
        cin >> k;
        // রুমের ধারণক্ষমতা থেকে বর্তমান বাসিন্দার পার্থক্য ২ বা তার বেশি হতে হবে
        if(k - t >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}