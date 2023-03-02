#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    int step= n-1;
    int x=0, y=0, c=1;
    
    if(n%2==1){
        a[n/2][n/2]=n*n;
    }
    while(step>0){
        for(size_t i=0; i<step; i++){
            a[x][y]=c;
            c++;
            y++;
        }
        for(size_t i=0; i<step; i++){
            a[x][y]=c;
            c++;
            x++;
        }
        for(size_t i=0; i<step; i++){
            a[x][y]=c;
            c++;
            y--;
        }
        for(size_t i=0; i<step; i++){
            a[x][y]=c;
            c++;
            x--;
        }
        step-=2;
        y++;
        x++;
    }
    for(size_t i=0; i<n; i++){
        for(size_t j=0; j<n; j++){
            cout << a[i][j] << ' ';
        }
    cout << "\n";
    }
    return 0;
}