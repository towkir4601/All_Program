#include<iostream>
using namespace std;
int main(){
    // int a , b , c , d , count = 0;
    // cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    // for (int i = 0 ; i < s.length() ; i++){
    //     if(s[i] == '1') count = count + a;
    //     if(s[i] == '2') count = count + b;
    //     if(s[i] == '3') count = count + c;
    //     if(s[i] == '4') count = count + d;   
    // }
    // cout << count << endl;
    for ( int i = 0 ; i < s.length() ; i++){
        cout << s[i] << endl;
    }
return 0;
}