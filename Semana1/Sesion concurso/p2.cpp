#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long hm[64][2];
    for(int i=0; i<64; i++){
        for(int j=0; j<2; j++){
            if(i==0){
                hm[i][0]=0;
                hm[i][1]=0;
            } else{
                hm[i][0]=hm[i-1][0]+hm[i-1][1]+1;
                hm[i][1]=hm[i-1][0];
            }
        }
    }
     cin>>n;
    while(n!=-1){
        cout<<hm[n][0]<<" "<<hm[n][0]+hm[n][1]+1<<"\n";
        cin>>n;
    }
}
