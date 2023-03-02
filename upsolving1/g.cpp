#include <iostream> 
#include <algorithm> 
#include <cmath> 
using namespace std; 
int main (){ 
 int n,o,k; 
 int e; 
 cin >>n>>o>>k; 
 if (k==1){ 
      for(int i=n;i<=o;i++){ 
         e=sqrt(i); 
         if (e*e ==i ){cout << i<<" ";}  
      }} 
 if (k==-1){ 
      for(int i=o;i>=n;i--){ 
         int e=sqrt(i); 
         if (e*e ==i ){cout << i<<" ";}  
      } } 
}