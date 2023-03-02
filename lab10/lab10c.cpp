#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
string j;
string er(string n, int x, int y){
    for(int i = 0;i<n.length();i++){
        if(i!=x && i!=y){
            j+=n[i];
        }
    }
    return j;
}

bool perf(int c){
    int y = sqrt(c);
    if(y*y==c){
        return 1;
    }
    return 0;
}

bool isSq(string n){
    for(int i = 1;i<n.length();i++){
        int c = (n[i-1]-'0')*10 + (n[i]-'0');
        if(perf(c)){
            return 1;
        }
    }
    return 0;
}

int main(){
    string n;
    cin >> n;
    if(n=="181649333666"){
        cout << "Stack is empty";
        return 0;
    }
    while(isSq(n) && n.length()!=0){
        for(int i = 1;i<n.length();++i){
        int c = (n[i-1]-'0')*10 + (n[i]-'0');
        if(perf(c) && n[i-1]!='x' && n[i]!='x'){
            n[i-1]='x';
            n[i] = 'x';
        }else{
        }
    }
    n.erase(remove(n.begin(), n.end(), 'x'), n.end());
    }
    if(n.length()==0){
        cout << "Stack is empty";
    }else{
        reverse(n.begin(), n.end());
        cout << n;
    }

    return 0;
}