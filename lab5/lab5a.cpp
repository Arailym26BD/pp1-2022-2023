#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    int capital=0, small=0;
    for(size_t i=0; i<a.size(); i++){
        if(a[i]>='a' && a[i]<='z')
        small++;
        else if (a[i]>='A' && a[i]<='Z')
        capital++;
    }
    cout<<small<<' '<<capital<<"\n";
    return 0;

}