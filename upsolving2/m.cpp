#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    string x;
    cin >> x;
    int sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        sum += (int)x[i];
    }
    if(sum >= 300){
        cout << "It is tasty!";
    } else {
        cout << "Oh, no!";
    }
}