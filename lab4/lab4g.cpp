#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    cin >> n;
    n++;
    int c=1;
    for(int i=1; i<n;i++){
        for(int j=1; j<n;j++){
            if(j!=n-i)
                cout << ".";
            if(j==n-i)
            {
                cout << c;
                c++;
            }
        }
    cout << "\n";
    }
    return 0;
}