#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cin >> word;
    // যদি স্ট্রিংটি খালি না হয়, তবে প্রথম অক্ষরটি Capitalize করা
        word[0] = toupper(word[0]);
    // আউটপুট প্রদর্শন
    cout << word << endl;

    return 0;
}