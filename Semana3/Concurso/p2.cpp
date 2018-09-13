#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string s;
    getline(cin, s);
    int arr[(s.length()-1)/2];
    int id=0;
    for(int i=0; i<s.length(); i+=2){
        arr[id]=s[i]-'0';
        id++;
    }

    sort(arr, arr+id);
    for(int i=0; i<id; i++){
        cout<<arr[i];
        if(i<id-1) cout<<"+";
    }

}
