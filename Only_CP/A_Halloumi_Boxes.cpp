#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void slove()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (k >= 2 || is_sorted(v.begin(), v.end()))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        slove();
    }

    return 0;
}