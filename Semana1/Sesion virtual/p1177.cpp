//p1177
#include <bits/stdc++.h>
using namespace std;
string sreverse(string s, int t){
    int ini=t-1;
    while(ini<s.length()){
       int b=ini;
       int a=ini-t+1;
           while(a<b){
                swap(s[a], s[b]);
                a++;
                b--;
            }
       ini+=t;
    }

    return s;
}

int main(){
    int n;
    string s;
    cin>>n;
    while(n>0){
        cin>>s;
        cout<<sreverse(s, s.length()/n)<<"\n";
        cin>>n;
    }
}
