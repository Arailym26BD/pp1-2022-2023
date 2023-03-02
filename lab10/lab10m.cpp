#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   vector<int> v;
   vector<int> w;
   for(int i=0;i<n;i++)
   {
    int a;
    cin>>a;
    v.push_back(a);
   }
   for(int i=0;i<m;i++)
   {
    int a;
    cin>>a;
    w.push_back(a);
   }
   auto c=unique(v.begin(),v.end());
   v.erase(c,v.end());
   auto d=unique(w.begin(),w.end());
   w.erase(d,w.end());
   vector<int> z;

   for(int i=0;i<m+1;i++)
   {
     if(i<v.size())
     {
      z.push_back(v[i]);
     }
     if(i<w.size())
     {
      z.push_back(w[i]);
     }  
   }
   auto i=unique(z.begin(),z.end());
   z.erase(i,z.end());
   for(int i=0;i<z.size();++i)
   {
    cout<<z[i]<<" ";
   }
  return 0;
}


   