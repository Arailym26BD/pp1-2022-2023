#include <bits/stdc++.h>
using namespace std;
int main(){
    long n,b=1,c=1;
    cin >> n;
    long a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++)
            cin >> a[i][j];   
    }
    long max=a[0][0];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
                b=i+1;
                c=j+1;
            }
        }
    }
    cout << b << ' ' << c;
    return 0;
}