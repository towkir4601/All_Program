#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;

        vector<int> v(t);
        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < t - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}