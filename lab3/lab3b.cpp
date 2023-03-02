#include <iostream> 
using namespace std; 
 
int main(){ 
int n; 
 
int a[100000]; 
int b=0; 
cin>> n; 
 
for(int i=0;i<n;i++){ 
 cin >> a[i]; 
 
} 
for(int i=0;i<n;i++){ 
 
 if (a[i]>0) 
 b++; 
 
}cout<<b<<endl; 
}