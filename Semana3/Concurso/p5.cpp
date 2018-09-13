#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long n, k;
    cin>>n>>k;
    int r=0;
    while((2*n-r-1)*r<2*k) r++;
    if((2*n-r-1)*r>2*k) r--;
    //cout<<" r es "<<r;
    int t=2*k-(2*n-r-1)*r;
    t/=2;
    int s=n-1-r-t;

    for(int i=0; i<r; i++)
        cout<<n-i<<" ";

    for(int i=0; i<s; i++)
        cout<<i+1<<" ";
    cout<<n-r<<" ";
    for(int i=s+1; i<n-r; i++)
        cout<<i<<" ";

}
