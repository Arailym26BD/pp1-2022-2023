#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.size();
    int a[n];
    for(size_t i=0; i<n; i++){
        a[i]=0;
        for(size_t j=0; j<n; j++){
            if(s[i]==s[j])
            a[i]+=1;
        }
    }
    for(size_t i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            cout<<"NO";
            return 0;
        }
    }
    cout <<"YES";
    return 0;
}