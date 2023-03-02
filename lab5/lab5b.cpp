#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    for(size_t i=0; i<a.size(); i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]=toupper(a[i]);
        }
        cout<<a[i];
    }
    return 0;
}