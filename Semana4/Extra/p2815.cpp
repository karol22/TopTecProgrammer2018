#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int t;
    cin>>t;
    while(t--){
        string t, p;
        cin>>t>>p;
        int ans=0;
        int ii=t.find(p);
        while(ii<t.length()){
            string k;
            if(ii>0)
            k=t.substr(0, ii);
            k+=t.substr(ii+p.length());
            t=k;
            ii=t.find(p);
            ans++;
        }
        cout<<ans<<"\n";
    }

}
