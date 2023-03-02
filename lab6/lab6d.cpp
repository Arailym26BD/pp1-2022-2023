#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    size_t a[n],x;
    for(size_t i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>x;
    for(size_t i=0; i<n; i++){
        if(x==a[i]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
