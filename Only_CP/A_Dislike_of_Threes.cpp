#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int count = 0;
        int last_num = 0;
        while (count < t)
        {
            last_num++;
            if (last_num % 3 == 0 || last_num % 10 == 3)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        cout << last_num << endl;
    }

    return 0;
}