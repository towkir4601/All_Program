#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n; 
    int heights[n];
    int max_val = 0, min_val = 100;
    int max_idx = 0, min_idx = 0;
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
        if (heights[i] > max_val) {
            max_val = heights[i];
            max_idx = i;
        }
        if (heights[i] <= min_val) {
            min_val = heights[i];
            min_idx = i;
        }
    }
    int swaps = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx) {
        swaps--;
    }
    cout << swaps << endl;
    return 0;
}