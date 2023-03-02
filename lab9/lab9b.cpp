#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> o;
    vector <int> e;
    while(n--){
        int num;
        cin >> num;
        if(num%2 == 0)
        e.push_back(num);
        else
        o.push_back(num);
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    for(size_t i=e.size() - 1; i < e.size(); i--){
        cout << e[i] << " ";
    }
    for(size_t i=0; i < o.size(); i ++ ){
        cout << o[i] << " ";
    }
    return 0;
}