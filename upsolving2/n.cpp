#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        if((x[i] >= 'a' & x[i] <= 'z') || (x[i] >= 'A' & x[i] <= 'Z')){
            cout << x[i];
        }
    }
}