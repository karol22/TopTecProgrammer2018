#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
unsigned long long coeff[21][21];
unsigned long long coef(int n, int k){
    if(n>=0&&n<21&&k>=0&&k<21) return coeff[k][n];
    else return 0;
}
int main(){
    optimizar_io
    for(int k=0; k<21;k++){
        for(int n=0; n<21; n++){
            if(k==0) coeff[k][n]=1;
            else if(n==0) coeff[k][n]=0;
            else coeff[k][n]=coeff[k-1][n-1]+coeff[k][n-1];
            //cout<<coeff[k][n]<<" ";
        }
        //cout<<endl;
    }
    /*
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cout<<coef(i, j)<<" ";
        }
        cout<<endl;
    }

    */

    unsigned long long N, P, K, k;
    cin>>N;

    while(N!=0){
        cin>>P>>K>>k;
        if(P>=N-k) cout<<"1/1\n";
        else if(K>=P) cout<<"0/1\n";
        else{
            unsigned long long num=0, den=coef(N,K+k+1);

        for(int r=1; r<=P-K; r++){
            num+=coef(N-K-r,k)*coef(K+r-1,K);
        }
        unsigned long long x=__gcd(num, den);
        num/=x;
        den/=x;
        cout<<num<<"/"<<den<<"\n";
        }
        cin>>N;
    }


}
