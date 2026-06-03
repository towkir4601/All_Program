#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // পাথরের সংখ্যা
    
    string s;
    cin >> s; // পাথরের রঙের স্ট্রিং (যেমন: RRG)

    int count = 0;
    // আমরা লুপ চালাবো 0 থেকে n-2 পর্যন্ত এবং i এর সাথে i+1 চেক করবো
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i+1]) {
            count++; // যদি পাশাপাশি দুটি সমান হয়, তবে একটি সরাতে হবে
        }
    }

    cout << count << endl;
    return 0;
}