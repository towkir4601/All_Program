#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k[10];
        int count = 0;
        int l = 1;
        int temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit > 0)
            {
                k[count] = digit * l;
                count++;
            }
            temp = temp / 10;
            l = l * 10;
        }
        cout << count << endl;
        for (int i = 0; i < count; i++)
        {
            cout << k[i] << " ";
        }
        cout << endl;
    }
    return 0;
}