#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    string a[n][2*n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
           if(j+i>=n-1 && j-i<=n-1){
               a[i][j]="*";
           }
           else a[i][j]=".";
        }
        
    }
        for(int i=0; i<n;i++){
            for(int j=0;j<n*2-1;j++){
                cout << a[i][j];
            }
            cout << endl;
        }   
    return 0;
}