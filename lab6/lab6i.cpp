#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.length();
    for(size_t i=0; i<s.length(); i++){
        if(i%2==0 || i==0){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}