#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <string> st;
    set <string> :: iterator it;
    vector <string> v;
    for(size_t i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
        st.insert(s);
    }
    int cnt = 0;
    for(it = st.begin(); it != st.end(); it++){
        int x = count(v.begin(), v.end(), *it);
        if(x == 3){
        cnt++;
        }
    }
    cout << cnt;
    return 0;
}