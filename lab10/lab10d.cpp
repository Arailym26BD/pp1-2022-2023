#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
long long arr[1000];
int main()
{
 long long x;
 cin>>x;
 vector<vector<long long>> v;
 for(long long i=0;i<x;i++)
 {
    long long y;
    cin>>y;
    vector<long long> w;
    for(long long j=0;j<y;j++)
    {
        long long z;
        cin>>z;
        w.push_back(z);
    }
    v.push_back(w);
 }
 for(long long i=0;i<x;i++)
 {
    long long a=accumulate(v[i].begin(),v[i].end(),0);
    arr[i]=a;
 }
 sort(arr,arr+1000,[](int a,int b) {
    return a>b;
 });
 for(long long i=0;i<x;i++)
 {
    for(long long j=0;j<x;j++)
    {
        long long p=accumulate(v[j].begin(),v[j].end(),0);
        if(arr[i]==p)
        {
            auto c=v[j];
            v[j]=v[i];
            v[i]=c;
        }
    }
 }
    reverse(v.begin(),v.end());
    for(long long i=0;i<x;i++)
    {
        for(long long j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}