#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s>>n;
    int cnt=0, max=0;
    for(int i=0; i<s.size(); i++){
        int cnt=0;
        if('0'<=s[i] && s[i]<='9'){
            while('0'<=s[i] && s[i]<='9'){
            cnt++;
            i++;
        }
    }
    if(max<cnt){
        max=cnt;
    }
}
    if(max>=n){
        cout<<"Valid";
    }
    else
    cout<<"Not valid";
    return 0;
    }