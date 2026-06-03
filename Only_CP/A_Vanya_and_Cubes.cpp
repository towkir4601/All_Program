#include <iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int h = 0;
    int now = 0;
    int use = 0;
    for (int i = 1; i <= n; i++)
    {
        now = now + i;
        use = use + now;
        if (use > n)
        {
            break;
        }
        h = i;
    }
    cout << h << endl;
    return 0;
}