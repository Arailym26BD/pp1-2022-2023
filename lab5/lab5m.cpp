#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char x;
    int n, c=0;
    cin >> s >> x >> n;
    for(size_t i=0; i<s.size(); i++){
        if(s[i]==x){
            c++;
        }
    }
    if(c==n)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}