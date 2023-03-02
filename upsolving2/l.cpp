#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    string x;
    getline(cin, x);
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'z'){
            cout << "a";
            continue;
        } else if (x[i] == 'Z'){
cout << "A";
            continue;
        }
        
        if((x[i] >= 'a' & x[i] <= 'z') || (x[i] >= 'A' & x[i] <= 'Z')){
            cout << (char)((int)x[i] + 1);
        } else {
            cout << x[i];
        }
    }
    
}