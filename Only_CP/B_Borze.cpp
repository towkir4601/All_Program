#include <iostream>
#include <string>
using namespace std;
int main()
{
    string t;
    cin >> t;
    for (int i = 0; i <= t.length(); i++)
    {
        if (t[i] == '.')
        {
            cout << "0";
        }
        if (t[i] == '-' && t[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        if (t[i] == '-' && t[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
    }
    return 0;
}