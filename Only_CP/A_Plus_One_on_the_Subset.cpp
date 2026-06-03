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
        int max = *max_element(v.begin(), v.end());
        int min = *min_element(v.begin(), v.end());
        cout << max - min << endl;
    }
    return 0;
}