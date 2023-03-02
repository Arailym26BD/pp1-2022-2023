#include <iostream>
using namespace std;
int main(){
    string s;
    int a, n, cnt=0;
    cin>>s>>a;
    n=s.length();
    for(size_t i=0; i<n; i++){
        if('0'<=s[i] && s[i]<='9')
        cnt++;
    }
    if(cnt>=a){
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}