#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    string a;
    cin >> a;
    char ch;
    cin >> ch;
    int pos = 0;
    int start;
    int end = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if(ch == a[i]){
            if(pos == 0){
                start = i;
                pos++;
            } else {
                end = i;
            }
        }
    }
    if(pos == 0){
        return 0;
    }
    if(end != -1){
        cout << start << " " << end;
    } else {
        cout << start;
    }
}