#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string x;
    getline(cin, x);
    int y;
    cin >> y;
    char arr[y];
    for (int i = 0; i < y; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+sizeof(arr));
    for (int i = 0; i < y; i++)
    {
        int sum = 0;
        for (int j = 0; j < x.size(); j++)
        {
            if(x[j] == arr[i]){
                sum++;
            }
        }
        cout << arr[i] << " - " << sum;
        cout << endl;
        sum = 0;
    }
    
}