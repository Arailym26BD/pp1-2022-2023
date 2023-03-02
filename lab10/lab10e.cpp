#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
  int x;
  int y;
  double sum=0;
  cin>>x;
  map<string,double> m;
  for(int i=0;i<x;i++)
  {
    
    cin>>y;
    for(int j=0;j<y;j++)
    {
      string s;
      double z;
      cin>>s>>z;
      sum=sum+z;
      if(m.find(s)==m.end())
      {
        m.insert(make_pair(s,z));
      }
      else
      {
        m[s]=m[s]+z;
      }   
    }
  }
  for(auto i=m.begin();i!=m.end();++i)
  {
    i->second=((i->second)/sum)*100;
  }
  for(auto i=m.begin();i!=m.end();++i)
  {
    cout<<i->first<<" "<<i->second<<endl;
  }
  return 0;
}