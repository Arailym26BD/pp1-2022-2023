#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4, a[4];
    for(size_t i=0; i<n; i++){
        cin>>a[i];
    }
    int max = a[0];
    for(size_t i=1; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}