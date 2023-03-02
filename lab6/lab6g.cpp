#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.length();
    for(size_t i=0; i<n; i++){
        if(s[i]!='a' && s[i]!='o' && s[i]!='u' && s[i]!='i' && s[i]!='e' && s[i]!='A' && s[i]!='O' && s[i]!='U' && s[i]!='I' && s[i]!='E'){
            cout<<s[i];
        }
    }
    return 0;
}