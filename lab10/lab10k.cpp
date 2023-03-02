#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int isp(int a)
{
  int p=0,t=0;
  if(a==0 || a==1)
  {
     return 0;
  }
  else
  {
     for(int i=2;i<=sqrt(a);i++)
    {
     if(a%i==0)
    {
      p=1;
      break;
    }
    }
     if(p==1)
    {
     return 0;
    }
     else
    {
     return 1;
    }
  }
}
int main(){
  int n,count=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    if(isp(abs(arr[i])))
    {
      count++;
    }
  }
  cout<<count;
  return 0;
}
