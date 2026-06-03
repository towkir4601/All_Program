#include <iostream>
#include <string>
using namespace std;
void solve()
{
    string x;
    cin >> x;
    int k = x[0] - '0';
    int len = x.length();
    int total_presses = (k - 1) * 10 + (len * (len + 1)) / 2;
    cout << total_presses << endl;
}
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}