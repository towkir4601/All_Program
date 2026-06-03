#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            long long diff;
            if (b > a)
            {
                diff = b - a;
            }
            else
            {
                diff = a - b;
            }
            long long j = diff / 10;
            if (diff % 10 != 0)
            {
                j++;
            }

            cout << j << endl;
        }
    }
    return 0;
}