#include <iostream>
using namespace std;
void slove()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max1 = max(a, b);
    int min1 = min(a, b);
    int max2 = max(c, d);
    int min2 = min(c, d);
    if (max1 < min2)
    {
        cout << "NO" << endl;
    }
    else if (min1 > max2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        slove();
    }
    return 0;
}