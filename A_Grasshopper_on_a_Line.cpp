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
        int x, y;
        cin >> x >> y;

        if (x % y != 0)
        {
            cout << "1" << endl;
            cout << x << endl;
        }
        else
        {
            cout << "2" << endl;
            cout << x - 1 << " " << 1 << endl;
        }
    }
    return 0;
}