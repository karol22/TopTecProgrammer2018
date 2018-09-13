#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    cin>>n;
    if(n<3){
        cout<<n-1;
        return 0;
    }
   int ans=1;
   for(int i=2; i<n; i++){
    if(__gcd(i, n)==1) ans++;
   }
   cout<<ans;
}
