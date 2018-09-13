#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long cat[301];
int main(){
    optimizar_io
    cat[0]=1;
    for(int i=0; i<300; i++){
        cat[i+1]=cat[i]*2*(2*i+1)/(i+2);
    }
    int k;
    cin>>k;
    while(k!=0){
        cout<<cat[k]<<"\n";
        cin>>k;
    }

}
