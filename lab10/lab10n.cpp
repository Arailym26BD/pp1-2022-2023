#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
 int n,t=0;
 cin>>n;
 vector<int> v;
 vector<int> w;
 for(int i=0;i<n;++i)
 {
  int a;
  cin>>a;
  v.push_back(a);
 }
 sort(v.begin(),v.end());
 do
 {
   vector<int> p=v;
   reverse(v.begin(),v.end());
   if(v==p)
   {
    w=p;
    t=1;
    break;
   }
   reverse(v.begin(),v.end());
 } while (next_permutation(v.begin(),v.end()));
 if(t==1)
 {
  for(int i=0;i<w.size();++i)
  {
    cout<<w[i]<<" ";
  }
 }
 else
 {
  cout<<"Impossible";
 }
 return 0;
}
