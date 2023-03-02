#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    int b;
    cin>>b;


    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if((a[i][j])>b){
                cout<<"Penalty!";
                return 0;
            }   
        }
    }

    cout<<"No penalty for today.";

}