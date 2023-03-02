#include <bits/stdc++.h>
using namespace std;
int main(){
string s1, s2;
getline(cin, s1);
s2=s1;
int n=s1.length();
sort(s1.begin(), s1.end());
if(s1==s2){
    cout << "YES";
}
else
    cout << "NO";
return 0;
}