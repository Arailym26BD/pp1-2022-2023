#include <bits/stdc++.h>
using namespace std;

int sumof(string s, int b){
    int sum = 0;
    if(s.length() == b) return sum;
    sum += sumof(s, b+1) + s.at(b) - 48;
    return sum;
}
int main(){
    string s;
    getline(cin, s);
    cout << sumof(s, 0);
    return 0;
}