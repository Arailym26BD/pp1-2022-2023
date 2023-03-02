#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  multimap<pair<string,string>,pair<int,int>> m;
  for(int i=0;i<n;++i)
  {
    string s,t;
    int a,b;
    cin>>s>>a>>t>>b;
    if(m.find(make_pair(s,t))->first==make_pair(s,t) && m.find(make_pair(s,t))->second==make_pair(a,b))
    {
       continue;
    }
    else{
      m.insert(make_pair(make_pair(s,t),make_pair(a,b)));
    }
  }
  for(auto i=m.begin();i!=m.end();++i)
  {
    cout<<(i->first).first<<" and "<<(i->first).second<<" "<<(i->second).first+(i->second).second<<endl;
  }
  return 0;
}