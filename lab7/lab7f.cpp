#include <bits/stdc++.h>
using namespace std;

int even(string s, int b){
    int cnt = 0;
    if(b == s.length()) return cnt;
    if(s.at(b)%2==0) cnt++;
    return cnt += even(s, b+1);
}

int main(){
    string s;
    getline(cin, s);
    cout << even(s, 0);
    return 0;
}