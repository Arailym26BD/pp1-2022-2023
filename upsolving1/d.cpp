#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <cmath> 
using namespace std; 
int arr[1001]; 
int main(){ 
  int n; 
  cin>>n; 
  for(int i=0;i<n;i++){ 
    int x; 
    cin>>x; 
    arr[x]++; 
  } 
  int moda=0; 
  for(int i=0;i<1001;i++){ 
    if(moda<arr[i]){ 
      moda=arr[i]; 
    } 
  } 
  for(int i=1000;i>=1;i--){ 
    if(arr[i]==moda){ 
      cout<<i<<" "; 
    } 
  } 
  return 0; 
}