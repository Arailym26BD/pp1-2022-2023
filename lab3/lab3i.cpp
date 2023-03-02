#include <iostream>
using namespace std;
int main ()
{
int n,l,r;
cin>>n>>l>>r;
int lol[n];
for (int i=0; i<n; i++)
 {
 cin>> lol[i];
}
 for (int i=0; i<l-1; i++)
 {
 cout<< lol[i]<<" ";
 }
 for (int i=r-1; i>=l-1; i--)
{
 cout<<lol[i]<<" ";
 }
 for (int i=r; i<n; i++)
{
cout<< lol[i]<<" ";
}
return 0;

}