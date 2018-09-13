#include <bits/stdc++.h>
#define acelerador ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    acelerador
    int a, b;
    cin>>a>>b;
    int test=1;
    while(a>-1&&b>-1){
        bool esarbol=true;
        set<int>raices;
        set<int>hijos;
        while(a>0&&b>0){
            if(a==b) esarbol=false;
            if(hijos.count(a)==0){
                raices.insert(a);
            } else{
                if(raices.count(a)>0)
                    raices.erase(a);
            }
            if(hijos.count(b)==0){
                hijos.insert(b);
            } else esarbol=false;

            if(raices.count(b)>0)
                raices.erase(b);

            cin>>a>>b;
        }
        if(raices.size()>1||hijos.size()>0&&raices.size()==0) esarbol=false;

        if(esarbol)  cout<<"Case "<<test<<" is a tree.\n";
        else cout<<"Case "<<test<<" is not a tree.\n";
        cin>>a>>b;//final de caso, se piden primeros nodos de nuevo
        test++;
    }

}
