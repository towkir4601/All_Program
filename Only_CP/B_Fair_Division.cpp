#include <iostream>
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
        int count1 = 0, count2 = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
            if (val == 1)
                count1++;
            else
                count2++;
        }
        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((sum / 2) % 2 != 0 && count1 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}