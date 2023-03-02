#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
  while(y!=0){
    int z = x%y ;
      x=y;
      y=z;}
  return x;
}

int main () {
   int n;
   cin >> n ;
   int x[n];
   vector <int> v;
   for (int i=0;i<n;i++) {
      cin >> x[i];
   } for (int i = 0 ;i<n ;i++){
      for (int j=i+1;j<n;j++) {
         int ans = gcd(x[i],x[j]);
         v.push_back(ans);
      } sort(v.begin(),v.end(),greater<int>());
   } cout << v[0] ;
}