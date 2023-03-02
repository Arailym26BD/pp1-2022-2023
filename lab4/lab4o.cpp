#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,max, r,c;
    cin >> n;
    int a[n][n];
    for(int i=0 ; i<n;i++){
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    }
    max=a[0][0];
     for(int i=0 ; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]>max || (i==0 && j==0)){
                    max = a[i][j];
                    r=i;
                c=j;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: "<< r+1 << ";"<< c+1 << endl;
    return 0;
}