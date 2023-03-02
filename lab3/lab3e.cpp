#include <iostream> 
using namespace std; 
int main() { 
int n; 
long long b =0; 
int a[100000]; 
cin>> n; 
 
for(int i=0;i<n;i++){ 
 cin >> a[i]; } 
 b=0; 
for(int i=0;i<=n;i++){ 
 b=b+a[i]; 
}cout << b<< endl;

return 0;
}