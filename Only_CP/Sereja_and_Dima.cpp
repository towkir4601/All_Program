#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>cards(n);
    for (int i=0;i<n;i++) {
        cin>>cards[i];
    }
    int sereja_score = 0;
    int dima_score = 0;
    int left = 0;
    int right = n - 1;
    int turn = 0;
    while(left<=right) {
        int chosen_value;
        if (cards[left]>cards[right]) {
            chosen_value=cards[left];
            left++;
        } else {
            chosen_value=cards[right];
            right--;
        }
        if (turn%2==0) {
            sereja_score=sereja_score+chosen_value;
        } else {
            dima_score =dima_score+chosen_value;
        }
        turn++;
    }
    cout<<sereja_score<<" "<<dima_score<<endl;
    return 0;
}