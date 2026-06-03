#include <iostream>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        char c;
        cin >> a >> b;
        cout << a + b << endl;
    }

    return 0;
}