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
    int n = x.size() - 1;
    for (int i = 0; i < x.size(); i++)
    {
        int b = (int)x[i] - 48;
        sum += b * (pow(2, n));
        n--;
    }
    cout << sum;
}