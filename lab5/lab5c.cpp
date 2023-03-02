#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    int n=str1.length(),m=str2.length();
    for(size_t i=0; i<n-m+1; i++){
        if(str2==str1.substr(i,m)){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}