#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void slove()
{
    int t;
    cin >> t;
    vector<string> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    vector<int> vt;
    for (int i = t - 1; i >= 0; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            if (v[i][j] == '#')
            {
                vt.push_back(j + 1);
                break;
            }
        }
    }
    for (auto x : vt)
        cout << x << " ";
    cout << endl;
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