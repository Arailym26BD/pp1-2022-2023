#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s1;
    cin >> s1;
    char ch;
    cin >> ch;
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if(s1[i] == s[j]){
                s[j] = ch;
            }
        }
        
    }
    cout << s;
    
}