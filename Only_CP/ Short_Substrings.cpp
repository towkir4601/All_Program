#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>s;
        cout<<s[0]<<s[1];
        for(int j=3;j<s.length();j=j+2) {
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}