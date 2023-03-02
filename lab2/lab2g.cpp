#include <iostream> 
using namespace std; 
 
int main() 
{ 
 
 int h,p; 
 int z[1000]; 
 
 cin >> p; 
 
 for (h = 0; h < p; ++h) 
 { 
  cin >> z[h]; 
 }  
 for (h = 1; h < p; ++h) 
 { 
 
  if (z[0] < z[h]) 
   z[0] = z[h]; 
 } 
 
 cout << z[0]; 
 
 return 0; 
}