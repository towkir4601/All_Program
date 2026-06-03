#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        auto min = min_element(a.begin(), a.end());
        (*min)++;
        int product = 1;
        for (int i = 0; i < n; i++)
        {
            product = product * a[i];
        }
        cout << product <<endl;
    }
    return 0;
}