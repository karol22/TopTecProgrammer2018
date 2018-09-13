#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    cin>>n;
    int ini=1, f, ans=0;
    while(n--){
        cin>>f;
        ans+=abs(ini-f);
        ini=f;
    }
    ans+=abs(f-1);
    cout<<ans;

}
