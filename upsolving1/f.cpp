#include <bits/stdc++.h> 
 
using namespace std; 
 
int main(){ 
  int n, cnt = 0; 
  cin >> n ; 
  int b[n][n]; 
  for ( int i = 0 ; i < n; i++){ 
  for ( int j = 0 ; j < n; j++){ 
   cin >> b[i][j] ; 
  }  
  } for ( int i = 0 ; i < n; i++){ 
  for ( int j = 0 ; j < n; j++){ 
   if( b[i][j] == b[j][i] && i != j){ 
      cnt ++; 
   } 
  } 
  } 
  if(cnt == n * n - n) cout << "Perfect."; 
  else cout << "Not perfect."; 
  }