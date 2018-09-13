#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int converter(string s){
    int ans=0;
    for(int i=0; i<s.length(); i++){
        switch(s[i]){
            case '.':
                ans+=1;
            break;
            case ':':
                ans+=2;
            break;
            case '-':
                ans+=5;
            break;
            case '=':
                ans+=10;
            break;
        }
    }
    return ans;
}
int main(){
    stack<long long> op;
    optimizar_io
    int n;
    long long r, t;

    string s;
    cin>>n;
    int i=0;
    cin>>s;
    op.push(converter(s));

    while(n>0){
        cin>>s;
        if(s[0]=='+'){
            cin>>s;
            op.push(converter(s));
        }else if(s[0]='*'){
            cin>>s;
            r=op.top();
            op.pop();
            op.push(r*converter(s));
        }
        n--;
    }
    /*while(!op.empty()){
        cout<<op.top()<<endl;
        op.pop();
    }*/


    while(op.size()>1){
        r=op.top();
        op.pop();
        t=op.top();
        op.pop();
        op.push(r+t);
    }
    cout<<op.top();


}
