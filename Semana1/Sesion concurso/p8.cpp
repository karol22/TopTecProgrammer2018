#include<bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

bool atleast(int ai, int bj, int m){
    if(bj>=m) return false;
    else return bj>=ai;
}

int main(){
    optimizar_io
    int n, m;
    cin>>n>>m;
    int a[n];
    int b[m];
    long long s[m+1];


    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<m; i++)
        cin>>b[i];

    sort(b, b+m);

    s[0]=0;
    for(int i=1; i<=m; i++)
        s[i]=s[i-1]+b[i-1];

    for(int i=0; i<m; i++)
        cout<<b[m]<<" "<<s[m+1]<<endl;

    long long ans=0;
    int index;

    for(int i=0; i<n; i++){
        int x=-1;

        for(int j=m; j>=1; j/=2){
            while(!atleast(a[i], b[x+j], m)){
                x+=j;
                if(x>=m) break;
            }
            index=x+1;
            if(x>=m) index=m;
        }

        if(index==m){
            ans+=m*a[i]-s[m];
        }else{
            ans+=(s[m]-s[index])-(m-index-1)*a[i]+index*a[i]-s[i];
        }

    }
    cout<<ans;



}
