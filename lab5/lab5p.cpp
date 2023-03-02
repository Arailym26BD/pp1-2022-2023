#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    
    getline(cin, s);
    int n=s.length();
    for(size_t i=0; i<n; i++){
        if(s[i] != 'z')
        s[i]=s[i]+1;
        
        else if(s[i]=='z')
        s[i] = 'a';
    } 
    cout << s << endl;
    return 0;
}