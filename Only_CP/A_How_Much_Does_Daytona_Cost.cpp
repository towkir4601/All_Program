#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int t, k, count = 0;
        cin >> t >> k;
        while (t--)
        {
            int val;
            cin >> val;
            if (val == k)
                count++;
        }
        if (count > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}