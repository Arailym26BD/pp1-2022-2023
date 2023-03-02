#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<n+1; i++){
        for(int j=1;i>=j; j++){
            cout << "[*]"; 
        }
        cout << "\n";
    }
    return 0;
}