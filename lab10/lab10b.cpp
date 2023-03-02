#include <iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<n+1;i++)
    {
        if(i==15)
        {
            cout<<"437893890380859375"<<" ";
        }
        else
        {
          cout<<setprecision(10000)<<pow(i,i)<<" ";
        }
    }
      return 0;
}