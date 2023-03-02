#include <iostream> 
using namespace std; 
 
int main() 
{ 
 
 int x , odd=0, even =0; 
cin >> x; 
int array[x]; 
for( int i=0; i<x; i++){ 
    cin >> array[i]; 
 
 
if ( array[i]%2==0){ 
    even++; 
} 
else  
    odd++; 
} 
 
cout << even<< " "<< odd; 
 
 
 return 0; 
}