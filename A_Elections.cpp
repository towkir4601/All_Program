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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c)
            cout << a + 1 << " " << a + 1 << " " << a + 1 << endl;
        else
        {
            if (a > b && b >= c)
            {
                cout << a - a << " " << (a - b) + 1 << " " << (a - c) + 1 << endl;
            }
            else if (b > c && c >= a)
                cout << (b - a) + 1 << " " << b - b << " " << (b - c) + 1 << endl;
            else
                cout << (c - a) + 1 << " " << (c - b) + 1 << " " << c - c << endl;
        }
    }
    return 0;
}