#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // ১. শুরুতে প্রথম স্টেশন পর্যন্ত গ্যাপ
        int max_gap = a[0] - 0;
        // ২. মাঝখানের স্টেশনগুলোর গ্যাপ চেক করা
        for (int i = 1; i < n; i++) {
            int current_gap = a[i] - a[i-1];
            if (current_gap > max_gap) {
                max_gap = current_gap;
            }
        }
        // ৩. শেষ স্টেশন থেকে x এ গিয়ে আবার ফিরে আসার গ্যাপ
        int last_gap = 2 * (x - a[n-1]);
        if (last_gap > max_gap) {
            max_gap = last_gap;
        }
        cout << max_gap << endl;
    }
    return 0;
}