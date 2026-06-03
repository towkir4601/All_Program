#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n;
    cin >> t; 
    int anton = 0;
    int danik = 0;
    for(int i = 0; i < n; i++) {
        if(t[i] == 'A') {
            anton++;
        } else if(t[i] == 'D') {
            danik++;
        }
    }
    if(anton > danik) {
        cout << "Anton" << endl;
    } 
    else if(danik > anton) {
        cout << "Danik" << endl;
    } 
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}