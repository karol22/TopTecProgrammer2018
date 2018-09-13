//p1236
#include <bits/stdc++.h>
using namespace std;
void result(long long a, long long b, long long c, long long d, long long p){
    int cont=0;
    if(p%(a+b)>0&&p%(a+b)<=a) cont++;
    if(p%(c+d)>0&&p%(c+d)<=c) cont++;

    if(cont==0) cout<<"none\n";
    else if(cont==1) cout<<"one\n";
    else cout<<"both\n";
}

int main(){
    long long a, b, c, d, p, m, g;
    cin>>a>>b>>c>>d>>p>>m>>g;
    result(a, b, c, d, p);
    result(a, b, c, d, m);
    result(a, b, c, d, g);
}
