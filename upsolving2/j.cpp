#include <iostream>
#include <algorithm>
using namespace std;
int main(){
 string x;
 cin >> x;
 string t = x;
 string b;
 string k = x.substr(0,x.size() - 1) ;
 reverse(k.begin(), k.end());
 reverse(x.begin() , x.end());
 if(x != t){
  cout << x.size();
 }
 else {
  b = x.substr(0, x.size() - 1) ;
  if(b != k){
   cout << b.size();
  }
  else {
  cout << 0;
 }
 }
}