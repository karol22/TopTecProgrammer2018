#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

struct par{
    par(int a){
        c=a;
        p=0;
    }
    int c;
    int p;
};
bool cmp(par a, par b){
    return a.p<b.p;
}
vector<par> candies;
long long f(long long current, int candy, int cant, int limit){
    if(current>=limit) return 0;
    else if(candy>=candies.size()) return 0;
    else{


        return current;
    }
}
int main(){
    optimizar_io
    int n;
    int p;
    cin>>n>>p;
    int e;
    for(int i=0; i<n; i++){
        cin>>e;
        par n(e);
        candies.push_back(n);
    }
    for(int i=0; i<n; i++){
        cin>>e;
        candies[i].p=e;
    }
    sort(candies.begin(), candies.end(), cmp);



}
