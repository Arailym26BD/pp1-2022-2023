#include <bits/stdc++.h>
using namespace std;
int a(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    return a(n-1) * 2;
}
int main(){
    int n;
    cin >> n;
    cout << a(n) << endl;
    return 0;
}