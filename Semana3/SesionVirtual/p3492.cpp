#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;


int main(){
    optimizar_io
    int t;
    unsigned long long a[11]={0};
    for(int i=0; i<11; i++){
        if(i==0) a[i]=1;
        else a[i]=i*a[i-1];
    }
    cin>>t;
    for(int tt=1; tt<=t; tt++){
        int i;
        cin>>i;
        cout<<"Case #"<<tt<<": "<<a[i]<<"\n";
    }
}
