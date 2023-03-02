#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
int n,m; 
cin>>n>>m; 
int a[n][m]; 
int b[m]; 
for(int i=0;i<n;i++){ 
for(int j=0;j<m;j++){ 
 cin>>a[i][j];}} 
for(int i=0;i<n;i++){ 
 int sum=0; 
for(int j=0;j<m;j++){ 
 sum=sum+a[i][j]; 
 b[i]=sum;}} 
for(int i=0;i<n;i++){ 
 cout <<b[i]/m<<" "; 
} 
}