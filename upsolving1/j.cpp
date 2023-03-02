#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n,max=-1,min=1000000,b; 
    cin>>n; 
    while(n!=0){ 
        b= n%10; 
        n=n/10; 
        if(max<b){ 
            max=b;} 
        if(min>b){ 
            min=b;} 
    }  
    cout<<max<<" "<<min;  
 
}