#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int t;
    cin>>t;
    int n, ans, e, k, kth;
    while(t--){
        cin>>n>>k;
        kth=-1;
        ans=0;
        for(int i=0; i<n; i++){
            cin>>e;
            if(i<k&&e>0){
                ans++;
                if(i==k-1){
                    kth=e;
                }
            }else if(e==kth) ans++;
        }
        cout<<ans<<"\n";
    }

}
