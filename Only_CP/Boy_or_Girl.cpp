#include<iostream>
#include<string>
#include<algorithm> // sort ব্যবহার করার জন্য এটি লাগবে

using namespace std;

int main(){
    string t;
    cin >> t;

    // ১. প্রথমে অক্ষরগুলোকে সাজিয়ে নিতে হবে (যেমন: apple -> aelpp)
    sort(t.begin(), t.end());

    int i = 0;
    int count = 0;

    // ২. এখন পাশাপাশি অক্ষর চেক করলে ইউনিক অক্ষর পাওয়া যাবে
    while(t[i] != '\0'){
        if (t[i] != t[i + 1]) {
            count++;
        }
        i++; // ৩. i এর মান বাড়ানো জরুরি
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } 
    else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}