//p1
#include<iostream>
using namespace std;

void full(int n){
    while(n--) cout<<"2\n";
}

int main(){
    int n, g;
    cin>>n>>g;
    int rooms[n];
    for(int i=0; i<n; i++){
        rooms[i]=0;
    }


    int ocupado=-1;
    int people;
    int sum=0;
    while(g--){
        cin>>people;
        sum+=people;
        if(sum>=2*n){
            full(n);
            return 0;
        }

        while(people>0){
                int i=0;
                for(i; i<n; i++){
                    if(rooms[i]==0){
                        rooms[i]=min(2, people);
                        people-=min(2, people);
                        break;
                    }
                }
                if(i==n){
                    i=0;
                    while(people>0){
                        if(rooms[i]==1){
                            people--;
                            rooms[i]=2;
                        }
                        i++;
                    }
                }
        }
    }

    for(int i=0; i<n; i++){
        cout<<rooms[i]<<"\n";
    }

}
