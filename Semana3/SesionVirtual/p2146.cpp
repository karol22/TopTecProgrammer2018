#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
 unsigned long long d, v;
 cin>>d>>v;
 unsigned long long p=v, q=v-3;
 if(p%2==0) p/=2;
 else q/=2;

 if(d==q*p) cout<<"yes";
 else cout<<"no";
}
