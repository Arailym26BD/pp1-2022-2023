#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            a[i][j]=i*j;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==0 )
                a[i][j]=a[i+1][j];
            
            if(j==0)
                a[i][j]=a[i][j+1];

            if(i==0 && j==0)
                a[i][j]=0;

                cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}