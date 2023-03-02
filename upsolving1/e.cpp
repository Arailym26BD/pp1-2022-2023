#include <bits/stdc++.h> 
 
using namespace std; 
 
int main(){ 
string s ; 
cin >> s ; 
int f = int(s[0] - 48); 
int sum = 0; 
for( int i = 1 ; i < s.size() ; i++){ 
    sum += int(s[i] - 48); 
} 
if(f == sum % 10){ 
  cout <<"YES"; 
} else { 
  cout <<"NO"; 
} 
}