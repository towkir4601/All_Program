#include <iostream>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << y << " " << x << endl;
        }
        else
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}