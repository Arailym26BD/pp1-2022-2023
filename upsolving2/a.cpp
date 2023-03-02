#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    string x;
    string y;
    int t = -1;
    int cnt = 0;
    getline(cin, x);
    for (int i = 0; i < x.size(); i++)
    {
            if(x[i] == ' ' || i == 0){
                t = i;
                if(i == 0){
                    t = -1;
                }
            for (int k = t + 1; k < x.size(); k++)
            {
                if(x[k] == ' '){
                    break;
                } else if (x[k] >= '0' & x[k] <= '9'){
                    cnt++;
                }
            }
            if(cnt == 0){
            for (int j = t + 1; j < x.size(); j++)
            {
                if(x[j] == ' '){
                    break;
                } else {
                    cout << x[j];
                }
            }
            cout << endl;
            }
        }
                  cnt = 0;
        }
        
        
    }