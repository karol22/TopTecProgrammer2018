#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
unsigned long long term(long long n, long long k){
    n++;
    return n*(n/k)-k*((n/k)*(n/k+1)/2);
}
int main(){
    optimizar_io
    long long n;
    cin>>n;
    long long k=2;
    unsigned long long ans=0;
    while(k<=n){
        ans+=term(n, k);
        k*=2;
    }
    cout<<ans;
}
