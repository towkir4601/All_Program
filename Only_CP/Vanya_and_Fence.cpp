#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h; // n = বন্ধুর সংখ্যা, h = বেড়ার উচ্চতা

    int total_width = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a; // প্রত্যেক বন্ধুর উচ্চতা ইনপুট নেওয়া হচ্ছে

        if (a > h) {
            total_width += 2; // উচ্চতা বেশি হলে প্রস্থ ২
        } else {
            total_width += 1; // উচ্চতা সমান বা কম হলে প্রস্থ ১
        }
    }

    cout << total_width << endl;

    return 0;
}