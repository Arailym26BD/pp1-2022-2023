#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    string s1;
    string s2 = "@gmail.com";
    for (int i = 0; i < x; i++)
    {
        cin >> s1;
        if(s1.find(s2) != std::string::npos){
            for (int j = 0; j < s1.size(); j++)
            {
                if(s1[j] != '@'){
                    cout << s1[j];
                } else {
                    break;
                }
            }
            cout << endl;
        }
    }
    
}