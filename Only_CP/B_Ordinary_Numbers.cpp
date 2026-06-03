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
        if (t < 10)
        {
            cout << t << endl;
        }
        else
        {
            int count = 9;
            int num =11;
            for (int i = 0; i <= 9; i++)
            {
               count++;
               num = num + 10;
               if(num >= t){
                cout << count << endl;
                return 0;
               }
            }
        }
    }

    return 0;
}