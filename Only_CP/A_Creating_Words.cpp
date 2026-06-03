#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        swap(a[0], b[0]);
        cout << a << " ";
        cout << b << endl;
    }

    return 0;
}