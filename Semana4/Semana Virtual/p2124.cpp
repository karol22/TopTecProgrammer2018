#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    while(cin>>n){
        if(n>=0&&n<=180&&n%6==0)
            cout<<"Y\n";
        else cout<<"N\n";
    }

}
