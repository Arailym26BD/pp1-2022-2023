#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (size_t i=0; i<n; i++){
        cin >> a[i];
    }
    int d, b;
    cin >> d >> b;
    reverse (a.begin() + d, a.begin() + b + 1);
    for (int i=0; i<n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}