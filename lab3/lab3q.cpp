#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==0 || n ==1){
        cout << "No";
    }
    int limit= n/2;
    bool isPrime =0;
    for(int i=2;i<=limit;i++){
        if(n % i ==0){
            isPrime=1;
            break;
        }
    }
    if(isPrime)cout << "No" << endl;
    else cout << "Yes" << endl;}