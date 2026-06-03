#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // n হলো সংখ্যাটি আর k হলো কতবার অপারেশন করতে হবে

    for (int i = 0; i < k; i++) {
        // শেষ অঙ্কটি ০ কি না তা চেক করার জন্য মডুলাস (%) ব্যবহার করা হয়
        if (n % 10 == 0) {
            n = n / 10; // শেষ অঙ্ক ০ হলে ১০ দিয়ে ভাগ
        } else {
            n = n - 1; // নাহলে ১ বিয়োগ
        }
    }

    cout << n << endl; // k বার শেষে ফলাফল প্রিন্ট
    return 0;
}