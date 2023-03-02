#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = sqrt(n);
    if(k * k==n) cout << "Yes" << endl;
    else cout << "No" << endl;

}