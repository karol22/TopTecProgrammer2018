#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int d, h, m;
    cin>>d>>h>>m;
    int ans=0;
    if(d<11) ans=-1;
    else if(d==11&&h<11) ans=-1;
    else if(d==11&&h==11&&m<11) ans=-1;
    else if(d==11){
        if(h==11) ans+=m-11;
        else ans+=49+(h-12)*60+m;
    }else{
        ans=(d-12)*60*24+60*h+m+12*60+49;
    }
    cout<<ans;
}
