#include<iostream>
#include<string>
#include<algorithm> // sort ফাংশনের জন্য

using namespace std;

int main(){
    string t;
    getline(cin, t); 
    string letters = "";
    for(int i = 0; i < t.length(); i++){
        if(t[i] >= 'a' && t[i] <= 'z'){
            letters =letters+t[i];
        }
    }
    if(letters.length()==0){
        cout<<"0"<<endl;
        return 0;
    }
    sort(letters.begin(), letters.end());
    int i = 1, count = 1;
    while(i < letters.length()){
        if(letters[i] != letters[i-1]){
            count++;
        }
        i++;
    }  
    cout << count << endl;
    return 0;
}