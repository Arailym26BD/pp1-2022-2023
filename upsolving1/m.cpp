#include <bits/stdc++.h> 
 
using namespace std; 
 
int main(){ 
long long int x , y; 
cin >> x >> y ; 
for ( long long i = -60 ; i < 60 ; i++) 
{ 
  if(x * pow(2,i) == y){ 
    cout <<"YES"<<" "<<i; 
    return 0 ; 
  } 
} 
cout <<"NO"; 
}