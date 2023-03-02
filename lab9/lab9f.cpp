#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else if(s[i] == ')' && !st.empty()) st.pop();
        else if(s[i] == ')' && st.empty()){
            cout << "NO";
            return 0;
        }
    }
    cout << (st.empty() ? "YES" : "NO");
    return 0;
}