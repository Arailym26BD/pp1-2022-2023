#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    if(n<k)
    cout<<"2";
    else if(n%k>1)
    cout<<(n/k)*2+2;
    else if(n%k==1)
    cout<<(n/k)*2+1;

    return 0;
}