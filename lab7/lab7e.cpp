#include <bits/stdc++.h>
bool degree(double n){
    if(n == 1) return true;
    if(n == 0) return false;
    n = degree(n/2); 
} 
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(degree(n) == 1) 
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
