#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void slove()
{
    int k;
    cin >> k;
    vector<int> v(k);
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        sum = sum + v[i];
    }
    int soto = *min_element(v.begin(), v.end());
    sum = sum - soto;
    int final = 0;
    final = sum - (soto * (v.size() - 1));
    cout << final << endl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        slove();
    }

    return 0;
}