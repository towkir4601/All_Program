#include<iostream>
using namespace std;
int main(){
int n,a,b,c,d;
cin >> n;
while(n--){
    cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d){
        cout << "Yes" << endl;
    }else{
        cout << "No"<< endl;
    }

}
return 0;
}