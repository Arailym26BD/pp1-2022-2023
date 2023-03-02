#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector <int> v;
    for(int i=0; i<n; i++){  
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << count(v.begin(), v.end(), k);
    return 0;
}