#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string a, b, c;
        cin >> n >> a;
        cin >> m >> b >> c;
        string last = a;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                last = b[i] + last;
            }
            else
            {
                last = last + b[i];
            }
        }
        cout << last << endl;
    }
    return 0;
}