#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] >= 97 & a[i] <= 122){
            cout << a[i];
        }
    }
    
}