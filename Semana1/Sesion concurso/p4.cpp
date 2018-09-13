#include<iostream>
#include<math.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


long long tt(int i){
    return (i*i+i)/2;
}

bool istriangular(int t){
    if(t<0) return false;
    return t==tt(sqrt(2*t));
}

int main(){
    optimizar_io
    int t;
    while(cin>>t){

        if(istriangular(t)) cout<<"1\n";
        else{
            int i=1;
            while(!istriangular(t-tt(i))&&i*i<2*t){
               i++;
            }
            if(istriangular(t-tt(i))) cout<<"2\n";
            else cout<<"3\n";
        }
    }
    return 0;
}
