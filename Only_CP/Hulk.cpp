#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // বিজোড় হলে "hate", জোড় হলে "love"
        if (i % 2 != 0) {
            cout << "I hate";
        } else {
            cout << "I love";
        }

        // যদি এটি শেষ স্তর না হয়, তবে "that" বসবে
        if (i == n) {
            cout << " it";
        } else {
            cout << " that ";
        }
    }
    cout << endl;

    return 0;
}