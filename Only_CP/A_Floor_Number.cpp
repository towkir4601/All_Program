#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == 1 || n == 2)
            cout << "1" << endl;
        else
        {
            int last = 0;
            for (int i = 1; n > 2; i++)
            {
                n = n - x;
                last = i;
            }
            cout << last + 1 << endl;
        }
    }

    return 0;
}