#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, maxx = -99999999, minn = 9999999, ind, summ = 0, l, targ;
    cin >> n;
    long long a[n + 10];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(a[i] != a[i + 1])
            cout << a[i] << " ";
    }
}