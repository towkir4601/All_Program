#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        cout << a[0] << b[0] << c[0] << endl;
    }

    return 0;
}