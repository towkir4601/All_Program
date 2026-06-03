#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        if (len % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            string first_half = s.substr(0, len / 2);
            string second_half = s.substr(len / 2);
            if (first_half == second_half)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}