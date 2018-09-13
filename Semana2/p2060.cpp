#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    cin>>n;
    while(n>0){
        int ans=0;
        int s=0;
        int e;
        while(n--){
          cin>>e;
          s+=e;
          if(s%100==0){
            s=0;
            ans++;
          }
        }
        cout<<ans<<"\n";
        cin>>n;
    }
}
