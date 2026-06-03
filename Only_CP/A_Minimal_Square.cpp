#include <iostream>
using namespace std;
void slove()
{
    int a, b;
    cin >> a >> b;
    int big_side = max(a, b);
    int small_side = min(a, b);
    int side = max(2 * small_side, big_side);
    cout << side * side << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        slove();
    }

    return 0;
}