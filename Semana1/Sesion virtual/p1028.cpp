//p1028
#include <bits/stdc++.h>
using namespace std;
bool contained(string a, string b){
    int i=0, j=0;
    while(j<b.length()){
        if(i==a.length()-1&&a[i]==b[j]) return true;
        else if(a[i]==b[j]){
            i++;
            j++;
        }else j++;
    }
    return false;
}

int main(){
    string a, b;
    while(cin>>a){
        cin>>b;
        if(contained(a, b))cout<<"Yes\n";
        else cout<<"No\n";
    }
}
