#include<iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int mishka = 0;
    int chris = 0;
    while(n--){
        int a , b;
        cin>> a >> b;
        if ( a > b ) mishka++;
        else if(b > a) chris++;
    }
    if (mishka > chris) cout << "Mishka" << endl;
    else if (chris > mishka) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

return 0;
} 