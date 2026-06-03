#include<iostream>
using namespace std;

int main() {
    int k, n, w; // k=দাম, n=টাকা, w=কলার সংখ্যা
    cin >> k >> n >> w;

    long long total_cost = 0;

    for(int i = 1; i <= w; i++) {
        total_cost = total_cost + (i * k); // প্রতিটি কলার দাম যোগ হচ্ছে
    }

    // যদি খরচ হাতের টাকার চেয়ে বেশি হয়
    if (total_cost > n) {
        cout << total_cost - n << endl;
    } else {
        cout << 0 << endl; // ধার করতে হবে না
    }

    return 0;
}