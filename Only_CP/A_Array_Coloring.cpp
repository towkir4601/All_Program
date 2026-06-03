#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int odd_count = 0;
        int sum = 0;
        for (int i = 0; i < t; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 1)
                odd_count++;
            sum = sum + val;
        }
        if (odd_count % 2 == 1)
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