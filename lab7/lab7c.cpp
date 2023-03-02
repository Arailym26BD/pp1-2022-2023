#include <bits/stdc++.h>
using namespace std;

bool find(int n, int vector[], int cnt, int target){
    if(vector[cnt] == target) return true;
    if(cnt >= n) return false;
    return find(n, vector, cnt+1, target);
}

int main(){
    int n, target;
    cin >> n;
    int a[n];
    for(size_t i=0; i<n; i++)
        cin >> a[i];
    cin >> target;
    if( find(n, a, 0, target) == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}