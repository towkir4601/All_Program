#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // আমরা একটি অ্যারে নেব যেখানে উপহার দাতার নম্বর জমিয়ে রাখব
    int giver[n + 1]; 

    for (int i = 1; i <= n; i++) {
        int target;
        cin >> target; // i নম্বর বন্ধু যাকে উপহার দিচ্ছে
        
        // target নম্বর বন্ধু উপহার পেয়েছে i এর কাছ থেকে
        giver[target] = i; 
    }

    // এখন ১ থেকে n পর্যন্ত প্রিন্ট করলেই উত্তর পাওয়া যাবে
    for (int i = 1; i <= n; i++) {
        cout << giver[i] << " ";
    }
    cout << endl;

    return 0;
}