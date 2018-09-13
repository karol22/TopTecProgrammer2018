#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    optimizar_io
    //4,76,516,2148,6768,17600,40120,82608,157252,280988,
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n++;
        int ans=0;
        for(int i=0; i<n*n; i++)
        for(int j=i+1; j<n*n; j++)
        for(int k=j+1; k<n*n; k++){
            if((j%n-i%n)*(k/n-j/n)!=(k%n-j%n)*(j/n-i/n))
                ans++;
        }
        cout<<ans<<"\n";
    }


}
