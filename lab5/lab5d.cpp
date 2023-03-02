#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=0;
    for(size_t i=0; i<s.size(); i++){
        if(s[i]==s[s.size()-1-i])
        n++;
    }
    if(n==s.size()){
        cout<<"YES";
    }
    else cout <<"NO";
    return 0;
}