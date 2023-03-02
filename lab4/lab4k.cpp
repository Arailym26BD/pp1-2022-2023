#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>> n>> m;
    int a[n][m], sumr=0, sumc=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sumr+=a[i][j];
        }
        cout << "The sum of row number "<< i+1<< " is "<< sumr << endl;
        sumr=0;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            sumc+=a[i][j];
        }
        cout << "The sum of column number "<< j+1<< " is "<< sumc << endl;
        sumc=0;
    }
    return 0;
}