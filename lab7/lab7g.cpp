#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 6;
    return fact(n-1) * n;
}
int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}