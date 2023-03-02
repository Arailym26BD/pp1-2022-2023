#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    int n=s.length();
    cout << s[n-1];
    return 0;
}