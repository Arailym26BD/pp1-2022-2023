#include <bits/stdc++.h>
using namespace std;
int main(){
    char buffer[128];
    cin>> buffer;
    size_t c=atoi(buffer);
    while(c>0){
        if(c%2!=0){
            cout<<"Not valid";
            return 0;
        }
        c=c/10;
    }
    cout<<"Valid";
    return 0;
}