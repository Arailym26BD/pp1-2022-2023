#include <bits/stdc++.h>
using namespace std;
//a
int main () {
int n , d , f;
int sum1=0 , sum2=0;
int cnt1=0 , cnt2=0;
cin>>n;
int arr[n];
for (int i=0 ; i<n ; i++) {
    cin>>arr[i];
}

for (int i=0 ; i<n ; i++) {
    if (arr[i]%2==0) {
        sum1=sum1+arr[i];
        cnt1++;
    } 
} f=cnt1*sum1;

for (int i=0 ; i<n ; i++) {
    if (arr[i]%2==1) {
        sum2=sum2+arr[i];
        cnt2++;
    }
} d=sum2*cnt2;

cout<<"Left hand magic power:"<<" "<<f<<endl;
cout<<"Right hand magic power:"<<" "<<d<<endl;

    return 0;
}