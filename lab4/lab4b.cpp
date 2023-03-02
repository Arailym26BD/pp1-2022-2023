#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,max,sdmax;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){

           for(int j=0; j<n; j++){
               cin>>a[i][j];
        }
    }
    max=a[0][0];
    sdmax=0;
    for(int i=0;i<n;i++){

        for(int j=0; j<n; j++){

            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>sdmax && a[i][j]<max){
                sdmax=a[i][j];
            }   
        }
    }
    cout<<sdmax<<endl;
    return 0;
}