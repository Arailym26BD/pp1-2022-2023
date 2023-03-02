#include <iostream> 
using namespace std; 
 
int main(){ 
int n; 
int s; 
int z; 
int counter=0; 
cin>>n; 
 for(int i=0;i<n; i++){ 
  cin>>s; 
  while(s!=0){ 
   z=s%10; 
   if(z==0) 
   counter++; 
   s=s/10; 
  } 
 } 
cout<< counter<<endl; 
}