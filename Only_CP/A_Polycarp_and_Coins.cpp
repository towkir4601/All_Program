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
        int t;
        int c1;
        cin >> t;
        if (t % 3 == 0)
        {
            c1 = t / 3;
            cout << c1 << " " << c1 << endl;
        }
        else if (t % 3 == 1)
        {
            c1 = (t / 3);
            cout << c1 + 1 << " " << c1 << endl;
        }
        else if (t % 3 == 2)
        {
            c1 = (t / 3);
            cout << c1 << " " << c1 + 1 << endl;
        }
    }

    return 0;
}