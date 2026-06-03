#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a[i] = abs(val);
    }
    int min = *min_element(a.begin(), a.end());
    cout << min << endl;
    return 0;
}