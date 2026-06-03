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
        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            long long even_sum = 0;
            long long odd_sum = 0;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i * 2 << " ";
                even_sum = even_sum + (i * 2);
            }
            for (int i = 1; i < n / 2; i++)
            {
                int current_odd = (i * 2) - 1;
                cout << current_odd << " ";
                odd_sum = odd_sum + current_odd;
            }
            cout << even_sum - odd_sum << endl;
        }
    }
    return 0;
}