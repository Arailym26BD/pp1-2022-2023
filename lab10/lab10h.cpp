#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    vector <int> ao;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(count(ao.begin(), ao.end(), a[i])>=1){
            continue;
        }else{
            ao.push_back(a[i]);
        }
    }

    for(int i = 0;i<ao.size();i++){
        cout << ao[i] << " ";
    }
    cout << endl;
    while(next_permutation(ao.begin(),ao.end())){
        for(int i = 0;i<ao.size();i++){
            cout << ao[i] << " ";
        }
        cout << endl;
    }
    return 0;
}