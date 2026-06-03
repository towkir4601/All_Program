#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> one, two, three;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t == 1) one.push_back(i);
        else if (t == 2) two.push_back(i);
        else if (t == 3) three.push_back(i);
    }
    int w = min({(int)one.size(), (int)two.size(), (int)three.size()});
    cout << w << endl;
    for (int i = 0; i < w; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
    return 0;
}