#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,k,m;
    cin>>s;
    for( int i=0; i<s.size(); i++){
        k=s;
        k.erase(i,1);
        m=k;
        reverse(k.begin(), k.end());
    if(k==m){
        cout<<"YES";
        return 0;
    }
    }
    cout <<"NO";
    return 0;
}