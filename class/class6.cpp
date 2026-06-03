#include <iostream>
#include <cmath>
using namespace std;
class coord
{
    float x, y;
public:
    coord(float a, float b)
    {
        x = a;
        y = b;
    }
    bool operator==(coord d)
    {
        // float c  = x - d.x;
        // float e = y - d.y;
        // c  = c  * c ;
        // e = e * e;
        // // float res = sqrt( c + e);
        //float ok = sqrt(pow((x - d.x), 2) + pow((y - d.y), 2));
        // int c= x-d.x;
        // int e= y-d.y;
        // if (c==0&&e==0){
        // }
        if(x!=d.x)return false;
        else if(y!=d.y)return false;
        else return true;   
    };
};
int main()
{
    coord a1(5, 7);
    coord a2(5, 7);
    coord a3(5,7);
    if(a1==a2 && a2==a3){
        cout << "equal "<<endl;
    }else{
        cout <<"not equal"<<endl;
    }
    //cout << "The distance between two points : " << d << endl;

    return 0;
}