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
        int div = 0;
        cin >> t;
        if (t == 2)
        {
            cout << "1" << endl;
        }
        else if (t % 4 == 0)
        {
            div = t / 4;
            cout << div << endl;
        }
        else
        {
            float ft = t;
            int add = (ft / 4) + 0.5;
            cout << add << endl;
        }
    }
    return 0;
}