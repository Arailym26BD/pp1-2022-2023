#include <bits/stdc++.h> 
 
using namespace std; 
 
int main(){ 
int n ; 
cin >> n ; 
int b[n]; 
for ( int i = 0; i < n ; i++){ 
  cin >> b[i]; 
   
}for ( int i = 0; i < n ; i++){ 
  sort(b, b+n); 
} 
cout << b[n-1]*b[n-2]; 
}