#include <iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int hours;
        int minit;
        int ans = 0;
        cin >> hours;
        cin >> minit;
        int lala = (24 - hours) * 60;
        ans = lala - minit;
        cout << ans << endl;
    }
    return 0;
}