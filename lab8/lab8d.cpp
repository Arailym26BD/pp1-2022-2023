#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(size_t  i = 0; i < n; i++)
        cin >> v[i];
    int b;
    cin >> b;
    v.erase(v.begin() + b);
    for(size_t i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    return 0;
}