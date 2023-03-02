#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
string toBool(string str){
    string s1 = "1";
    string s2 = "0";
    if(str == s1){
        return "true";
    } else if(str == s2){
        return "false";
    } else {
        return str;
    }
}
int main(){
    string str;
    cin >> str;
    cout << toBool(str);
}