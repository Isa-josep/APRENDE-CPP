#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  int final=a.size()-1;
  for(int i=0;i<=final;i++){
    if(a[i]!=a[final-i]){
      cout<<"NO";
      return 0;
    }
  }
  cout<<"SI";
}
