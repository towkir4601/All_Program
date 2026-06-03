#include<iostream>
using namespace std;
int main(){
    int n, t, k, level;
    cin >> n;
    // একটি চেক অ্যারে নিলাম সব লেভেল ট্র্যাক করতে (সর্বোচ্চ ১০০ লেভেল)
    int check[101] = {0}; 
    // প্রথম বন্ধুর লেভেলগুলো
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> level;
        check[level] = 1; // যে লেভেলটা সে পারে সেটা ১ করে দিলাম
    }
    // দ্বিতীয় বন্ধুর লেভেলগুলো
    cin >> k;
    for(int j = 0; j < k; j++){
        cin >> level;
        check[level] = 1; // যে লেভেলটা সে পারে সেটা ১ করে দিলাম
    }
    // এবার চেক করি ১ থেকে n পর্যন্ত কয়টা লেভেল ১ হয়েছে
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(check[i] == 1){
            count++;
        }
    }
    // যদি count এর মান n এর সমান হয়, তারমানে সব লেভেল তারা পারে
    if(count == n){
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}