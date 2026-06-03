#include <iostream>
#include <algorithm> // max এবং min ফাংশনের জন্য
using namespace std;

int main() {
    int s, t, k;
   cin >> s >> t >> k;
    int max_val=max({s,t,k});
    int min_val=min({s,t,k});
    int sum=max_val-min_val;
    cout << sum << endl;
    return 0;
}