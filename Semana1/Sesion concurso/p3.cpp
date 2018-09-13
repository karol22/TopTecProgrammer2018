#include<iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
    optimizar_io
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;
        if(a!=b) cout<<"1\n";
        else cout<<"2\n";
    }
}
