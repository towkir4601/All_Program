#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
           string s;
           cin >> s;
    int a = count(s.begin(),s.end(),'A');
    int b = count(s.begin(),s.end(),'B');
    cout<<(a>b? "A":"B")<< endl;
    }
return 0;
}