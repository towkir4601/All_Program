#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void slove()
{
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    bool flag = true;
    for (int i = 0; i < t - 1; i++)
    {
        if (v[i] == v[i + 1])
            flag = false;
    }
    if (!flag)
        cout << "-1" << endl;
    else
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
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