#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,3,10,5};
    if(is_sorted(v.begin(),v.end())){
        cout<<"Sorted"<< endl;
    }
    else cout << "Not Sorted"<<endl;


return 0;
}