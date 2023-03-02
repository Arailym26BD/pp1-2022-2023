#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t, copy;
    cin >> s >> t;
    int n=s.length(), m=t.length();
    int p=m/n;
    copy=s;
    for(size_t i=1; i<p; i++){
        s+=copy;
    }
    if(s==t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}