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
        if ((x * y) % 2 == 0)
            cout << (x * y) / 2 << endl;
        else
            cout << ((x * y) / 2) + 1 << endl;
    }

    return 0;
}