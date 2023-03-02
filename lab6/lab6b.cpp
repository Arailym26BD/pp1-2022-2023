#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], b[n], d[n];
    for(size_t i=0; i<n; i++){
        cin >> a[i];
    }
    for(size_t i=0; i<n; i++){
        cin >> b[i];
    }
    for(size_t i=0; i<n; i++){
        d[i] = b[i]-a[i];
        if(d[i]<0)
        d[i]=d[i]*(-1);
    }
    for(size_t i=0; i<n; i++)
        cout << d[i] << ' '<< endl;
    return 0;
}