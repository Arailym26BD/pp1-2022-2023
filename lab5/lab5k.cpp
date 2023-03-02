#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline ( cin,s);
    int n=s.size(), c=0;
    for (size_t i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        c++;
    }
    cout<<c<<"\n";
    return 0;
}