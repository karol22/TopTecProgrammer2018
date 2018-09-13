#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define rr 1000000007
using namespace std;
int main(){
    optimizar_io
    long long p;
    cin>>p;
    while(p!=0){
        p++;
        bool binario[30];
        int ii=0;
        while(p>0){
            binario[ii++]=p%2;
            p/=2;
        }
        ii--;
        long long ans=1;
        while(ii>-1){
            ans*=ans;
            if(binario[ii]) ans*=2;
            ans%=rr;
            ii--;
        }
        if(ans>0) ans--;
        else ans=rr-1;
        cout<<ans<<"\n";
        cin>>p;
    }
}
