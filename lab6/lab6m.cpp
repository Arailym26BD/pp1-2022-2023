#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    size_t a[n];
    for(size_t i=0; i<n; i++){
        cin>>a[i];
    }
    for(size_t i=n-1; i>=0; i--){
        cout<<a[i]<<" ";
        if(i==0)
        return 0;
    }
}