#include <iostream>

using namespace std;

int main()
{
    int n ,target;
    cin >> n >> target;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[n-1]<target){
        cout << n;
    }
    else{
        for (int i = 0; i < n; i++)
            if (arr[i] == target) {
                cout << i + 1 << endl;
                break;
            } else if (target < arr[i]) {
                cout << i << endl;
                break;

            }
    }



}