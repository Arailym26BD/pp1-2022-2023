#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
char s[20];


void dexToHex(int y){
    string x;
    int i = 0;
    while (y > 15)
    {
        if(y % 16 > 9){
            s[i] = (char)((y % 16) + 55);
        } else {
            s[i] = (char)((y % 16) + 48);
        }
        y = y / 16;
        i++;

    }
    if(y > 9){
        s[i] = (char)(y + 55);
    } else {
        s[i] = (char)(y + 48);
    }
    for (int i = 19; i >= 0; i--)
    {
        if(s[i] != -1){
    cout << s[i];
        }
    }
}

int main(){
    for (int j = 0; j < 20; j++)
{
    s[j] = -1;
}
    int y;
    cin >> y;
    dexToHex(y);
    return 0;
}