#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        vector<int> v(t);
        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
        }
        if (v[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}