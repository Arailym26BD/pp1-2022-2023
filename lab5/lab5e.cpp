#include <bits/stdc++.h>
using namespace std;
int main(){
    int odd=0, even=0;
    string s;
    getline(cin, s);
    for(size_t i=0; i<s.size(); i++){
        if(i%2==0){
            even+=s[i];
        }
        else if(i%2!=0){
            odd+=s[i];
        }
    }
    if(even==odd)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}