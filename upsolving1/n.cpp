#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    string s = "";
    for(int i = 0; i < a; i++) {
        int x;
        cin >> x;

        while(x % 10 == 0) {
            x /= 10;
        }

        s += to_string(x);
    }
    string s1 = s;
    reverse(s.begin(), s.end());
    if(s == s1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}