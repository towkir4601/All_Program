#include<iostream>
using namespace std;
int main(){
    int n,count_sum=0,k,ksum=0;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++){
        scanf("%d",&t[i]);
        count_sum=count_sum+t[i];
    }
    if(count_sum%2==0){
    cout<<t;
    }else{
         cin>>k;
        for(int j=0;j<k;j++){
   for(int i=n;i>n;i--){
    cout<<t[i];
   }
    }
}
return 0;
}