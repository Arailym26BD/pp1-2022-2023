#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
  int n,x;
  cin>>n>>x;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.push_back(a);
  }
  rotate(v.begin(),v.begin()+x,v.end());
  reverse(v.begin(),v.end());
  for(auto i=v.begin();i!=v.end();++i)
  {
    cout<<*i<<" ";
  }
  return 0;
}