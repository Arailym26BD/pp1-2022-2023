#include <iostream> 
 
using namespace std ; 
 
int main () 
{ 
int a , now  = 1 , sum = 0 ; 
 
cin >> a ; 
 
while( a > 0 ) 
{ sum =  sum + now ; 
 
a = a - 1 ; 
 
now++ ; 
 
} 
cout << sum ; 
 
}
