#include<iostream>
#include<stdbool.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n<2){
            cout<<"INVALID"<<endl;
            continue;
        }
        bool towkir=true;
        for(int i=2;i<n;i++){
            if(n%i==0){
                towkir=false;
                break;
            }
        }
        if(towkir){
            int ld=0,sum=0;
            while(n!=0){
                ld=n%10;
                sum=sum+ld;
                n=n/10;
            }
            cout<<sum<<endl;
            bool towkir=true;
            for(int i=2;i<sum;i++){
                if(sum%i==0){
                    towkir=false;
                    break;
                }
            }
            if(towkir==true)
            cout<<"SUPER_PRIME"<<endl;
        }
        else if(towkir==false){
            if(n%2==0){
                cout<<"EVEN_COMPOSITE"<<endl;
            }else{
                cout<<"ODD_COMPOSITE"<<endl;
            }
        }
return 0;
}
