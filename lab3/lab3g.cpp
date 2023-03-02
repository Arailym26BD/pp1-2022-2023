#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
}
int maxElement = -1e9;
int minElement = 1e9;

for(int i=n-1; i>=0; i--){
    maxElement = max(maxElement,arr[i]);
    minElement = min(minElement,arr[i]);
}

for(int i = 0; i<n; i++){
    if(arr[i]==maxElement)
    cout << minElement<<" ";
    else cout << arr[i]<<" ";
}
cout<<endl;
}