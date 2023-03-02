#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

double GetPriceQualityRatio(int price, int quality){
    double p = (double)quality / (double)price;
    return p;
}

int main(){
    int x;
    cin >> x;
    string s;
    string s1;
    double maxi = -1;
    for (int i = 0; i < x; i++)
    {
        int price, quality;
        cin >> s;
        cin >> price >> quality;
        double d = GetPriceQualityRatio(price, quality);
        if(d > maxi){
            maxi = d;
            s1 = s;
        }
    }
    cout << s1;
}