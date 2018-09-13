#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    optimizar_io
    int n,m, j;
    cin>>n>>m>>j;
    int ini=1, fin=m;
    int e;
    int ans=0;
    while(j--){
        cin>>e;
        if(e<ini){
            ans+=ini-e;
            ini=e;
            fin=e+m-1;
        } if(e>fin){
            ans+=e-fin;
            fin=e;
            ini=e-m+1;
        }
    }
    cout<<ans;
}
