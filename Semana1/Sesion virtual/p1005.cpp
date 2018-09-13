#include <iostream>
#include <string>
using namespace std;

string LongestWord(string sen) {
    string mayor="";
    int i=0;

    for(int  j=0; j<sen.length(); j++){
        if(sen[j]<'A'||(sen[j]>'Z'&&sen[j]<'a')||sen[j]>'z'){
            i=j;
        }else{
            cout<<"  "<<i<<" "<<j;
            string k=sen.substr(i, 1)<<endl;
            cout<<k;
        }
    }
  return sen;

}

int main() {
  string sen;
  cin>>sen;
  // keep this function call here
  cout << LongestWord(sen);
  return 0;

}
