#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int kom = 22197866887L;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << 0 << endl;
            return;
        }
        int dif = a[i + 1] - a[i];
        int cur = (dif / 2) + 1;
        kom = min(kom, cur);
    }
    cout << kom << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}