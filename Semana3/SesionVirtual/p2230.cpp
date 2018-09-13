#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a[8], b[8];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    long long int ans=0;
    for(int i=0; i<n; i++){
        ans+=a[i]*b[n-i-1];
    }
    cout<<ans;

}
