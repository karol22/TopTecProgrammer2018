#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int t, e;
    long long sum;
    cin>>t;
    while(t--){
        sum=0;
        for(int i=0; i<10; i++){
            cin>>e;
            sum+=e;
        }
        cout<<setprecision(3)<<fixed<<(float)(sum)*0.85<<"\n";
    }
}
