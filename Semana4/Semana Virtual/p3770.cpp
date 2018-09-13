#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    string a;
    cin>>n>>a;
    sort(a.begin(), a.end());


    cout<<a[(a.length()-1)/2];

}
