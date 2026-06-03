#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int odd_count = 0;
        int even_count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum = sum + val;
            if (val % 2 != 0)
            {
                odd_count++;
            }
            else
            {
                even_count++;
            }
        }
        if (sum % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (odd_count > 0 && even_count > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}