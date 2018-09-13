#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int t;
    cin>>t;
    int rsize=t;
    int a[26]={0};
    char x;
    while(t--){
        cin>>x;
        a[x-'A']++;
    }

    int turn;
    cin>>turn;
    turn%=2;
    string nombres[2]={"PEPE", "JUAN"};

    bool primerogana=true;
    long long sump=0, sums=0;

    for(int i=0; i<26; i++){
        if(a[i]>0){
            if(i%2==0) primerogana=true;
            else primerogana=false;
        }
        rsize-=a[i];
        if(i%2==0){
            sump+=a[i]*rsize;
        } else sums+=a[i]*rsize;
    }

        if(sump>sums) cout<<nombres[turn];
        else if(sump<sums) cout<<nombres[(turn+1)%2];
        else{
            if (primerogana) cout<<nombres[turn];
            else cout<<nombres[(turn+1)%2];
        }
        cout<<" "<<abs(sump-sums);


}
