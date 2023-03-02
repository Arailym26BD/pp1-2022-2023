#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            cout<<x[i]<<" ";
        }   
    }
    for(int i=0;i<n;i++){
        if(x[i]%2!=0){
            cout<<x[i]<<" ";
        }   
    }
}