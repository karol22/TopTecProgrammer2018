//p2662
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> vacas;

    int n;
    cin>>n;
    while(n--){
        string a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        a[0]+=".";
        a[0]+=a[1];
        a[0]+=".";
        a[0]+=a[2];
        if(!vacas.count(a[0])){
            vacas[a[0]]=1;
        } else vacas[a[0]]++;
    }
    int ans=0;
    for(auto x : vacas){
        if(ans<x.second)
            ans=x.second;
    }
    cout<<ans;
}
