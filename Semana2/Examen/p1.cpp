#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    //optimizar_io
    char s[104];
    bool ans=false;
    memset(s,'\0',sizeof(s));
    while(cin.getline(s, 101)){
        if(!ans){
            ans=true;
        }else cout<<"\n";
            for(int i=0; i<sizeof(s)-2; i++){
                if(s[i]=='B'&&s[i+1]=='U'&&s[i+2]=='G'){
                    i+=2;
                }else {
                    if(s[i]!='\0')
                    cout<<s[i];
                }
            }
        memset(s,'\0',sizeof(s));
    }
}
//JJKBKJ
