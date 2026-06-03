#include<iostream>
#include<string>
using namespace std;

int main(){
    string t;
    cin >> t; // Codeforces-এ এই প্রবলেমে স্পেস থাকে না, তাই cin ঠিক আছে
    
    int count = 0; // ৪ এবং ৭ কয়টি আছে তা গুনার জন্য
    int i = 0;
    
    while(t[i] != '\0'){
        if(t[i] == '4' || t[i] == '7'){
            count++; // ৪ বা ৭ পেলে শুধু গুনবো
        }
        i++;
    }

    // এখন চেক করবো কয়টি পাওয়া গেছে (count) সেই সংখ্যাটি লাকি কি না
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}