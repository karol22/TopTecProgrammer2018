#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
    unsigned long long f[10000];

    unsigned long long ff(int k){
        if(k<=10000) return f[k];
        else{
            if(k%2==0){
                return ((ff((k-2)/2)+ff((k+2)/2))*ff(k/2))%1000000007;
            }else{
                return (ff((k)/2)*ff((k)/2)+ff((k)/2+1)*ff((k)/2+1))%1000000007;
            }
        }
    }

int main(){
    optimizar_io
    f[0]=0;
    f[1]=1;
    for(int i=2; i<10000; i++){
        f[i]=f[i-1]+f[i-2];
        if(f[i]>= 1000000007)
            f[i]-= 1000000007;
    }
    int t, e;
    cin>>t;
    while(t--){
        cin>>e;
        cout<<ff(e+1)<<"\n";
    }

}
