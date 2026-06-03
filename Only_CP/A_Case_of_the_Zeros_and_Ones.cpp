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
    int zero = 0;
    int one = 0;
    string v;
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == '0')
            zero++;
        else if (v[i] == '1')
            one++;
    }
    int last = abs(zero - one);
    cout << last << endl;
    return 0;
}