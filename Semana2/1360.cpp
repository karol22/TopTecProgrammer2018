#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    unsigned long long p, q;
    cin>>p>>q;
    while(p>0){
        cout<<p<<"/"<<q<<"=[";//75 34
        if(q>p) swap(p, q);
        while(p!=q){//35 7
            if(p%q==0){
              cout<<p/q-1<<",";//2
              break;
            }
            cout<<p/q<<",";//2
            p=p%q;//7 35
            swap(p, q);//35 7
        }
        cout<<"1]\n";
        cin>>p>>q;
    }

}
