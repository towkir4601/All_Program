#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {2, 3, 1, 9, 5, 9, 8, 4, 1, 5};
    sort(v.begin(), v.end());
    int sr = unique(v.begin(), v.end()) - v.begin();
    cout << sr << endl;
    for (auto i = 0; i < sr; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    // vector<int>::iterator it = max_element(v.begin()+1,v.begin()+5);
    // cout<< *it <<endl;
    int n = max_element(v.begin()+1,v.begin()+5) - v.begin();
    cout << n << endl;

    return 0;
}