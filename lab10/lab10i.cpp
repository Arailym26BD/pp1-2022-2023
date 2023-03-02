#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n; 
    cin>>n;
	vector <int> num;
    vector <int> rev;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        num.push_back(x);
    }
    rev=num;
    reverse(rev.begin(), rev.end());
    for (int i=0; i<n; i++)
    {
        if(rev[i]==num[i])
        {
            cout<< "OK"<< endl;
        }
        else
        {
            cout<< "Instead of " <<num[i]<< " here was " <<rev[i]<< endl;
        }
    }


	return 0;
}