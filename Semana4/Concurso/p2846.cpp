#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        int s=0;
        long long ans=a;
        while(ans>0){
            s+=ans%10;
            ans/=10;
        }
        ans=s+10*(a%1000);
        if(ans<1000) ans+=1000;
        else if(ans>9999) ans%=10000;
        a=ans;
        cout<<(a/1000)%10<<(a/100)%10<<(a/10)%10<<a%10<<"\n";
    }

}
