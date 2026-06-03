#include <iostream>
#include <string>
using namespace std;
int main() {
    string t;
    cin >> t;
    int i=0;
    int low=0;
    int high=0;
    while(t[i]!='\0'){
        if(t[i]==toupper(t[i])){
            high++;
        }else{
            low++;
        }
        i++;
    }
    if(low>=high){
        int j=0;
        while(t[j]!='\0'){
            t[j]=tolower(t[j]);
            j++;
        }
        cout<<t<<endl;
    }else{
        int k=0;
        while(t[k]!='\0'){
            t[k]=toupper(t[k]);
            k++;
        }
        cout<<t<<endl;
    }
    return 0;
}