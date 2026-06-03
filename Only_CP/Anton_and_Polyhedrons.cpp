#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    string s;
    cin>>n;
    string q="Tetrahedron";
    string w="Cube";
    string e="Octahedron";
    string r="Dodecahedron";
    string t="Icosahedron";
    for(int i=0;i<n;i++){
        cin>>s;
        if(s==q){
            count=count+4;
        }
        if(s==w){
            count=count+6;
        }
        if(s==e){
            count=count+8;
        }
        if(s==r){
            count=count+12;
        }
        if(s==t){
            count=count+20;
        }
    }
cout<<count<<endl;
return 0;
}