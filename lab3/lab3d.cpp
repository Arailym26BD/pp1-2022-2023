#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int maxNumber = -1e9;
    int indexOfMaxMumber =0;
    for(int i =0;i<n;i++){
       if(maxNumber<arr[i]){
           maxNumber=arr[i];
           indexOfMaxMumber=i;
       }
    }
    cout << indexOfMaxMumber+1;
}