#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void slove()
{
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    int two = 0;
    for(int i= 0;i<t;i++)
    {
        if (v[i] == 2)
            two++;
    }
    if (two % 2 != 0)
        cout << "-1" << endl;
    else if (two == 0)
        cout << "1" << endl;
    else if (two % 2 == 0)
    {
        int s;
        int div=two/2;
        int two2=0;
     for(int i =0 ;i<t;i++){
        if(v[i]==2)two2++;
        if(two2==div){
            s=i;
            break;
        }
     }
     cout << s+1 <<endl;
    }
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