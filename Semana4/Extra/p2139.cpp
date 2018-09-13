#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a, b;//a pertenece a b
    while(cin>>a){
        cin>>b;
        int i=0, j=0;
        bool ans=false;
        while(i<a.length()&&j<b.length()){
            if(a[i]==b[j]){
                    if(i==a.length()-1){
                        ans=true;
                        break;
                    }
                    i++;
            }
            j++;
        }
        if(ans) cout<<"Yes\n";
        else cout<<"No\n";
    }

}
