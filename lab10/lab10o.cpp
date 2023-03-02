#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
void bin(int a)
{
  vector<int> c;
  for(int i=0;i<a+100;i++)
  {
    if(a==0)
    {
      break;
    }
    else
    {
       c.push_back(a%2);
       a=a/2;
    }
  }
  for(int i=c.size()-1;i>=0;i--)
  {
    cout<<c[i];
  }
  c.clear();
  cout<<endl;
}
int main(){
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.push_back(a);
  }
  for_each(v.begin(),v.end(),bin);
  return 0;
}