#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        ans++;
        n/=2;
    }
    cout<<ans;
}
