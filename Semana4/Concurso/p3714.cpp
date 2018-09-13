#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int change(int a){
    int pow=1;
    while(pow<=a){
        if((a/pow)%10==2){
                a+=3*pow;

        }else if((a/pow)%10==5){
            a-=3*pow;
        } else if((a/pow)%10==6){
            a+=3*pow;
        } else if((a/pow)%10==9){
            a-=3*pow;
        }
        pow*=10;
    }
    return a;
}
int main(){
    optimizar_io
    string s;
    while(cin>>s){

        int a[26]={0};
        int cont=1;
        for(int i=0; i<s.length(); i++){
            if(a[s[i]-'a']==0){
               a[s[i]-'a']=cont;
               cont++;
            }
            cout<<change(a[s[i]-'a']);
        }
        cout<<"\n";
    }

}
