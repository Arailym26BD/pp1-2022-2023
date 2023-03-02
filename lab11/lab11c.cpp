#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    map <string, double> a;
    vector <pair<string, double> > b;
    for(int i = 0;i<n;i++){
        string g;
        double f;
        cin >> g >> f;
        sum += f;
        if(a.find(g)->first==g){
            a.find(g)->second += f;
            continue;
        }
        a.insert(make_pair(g, f));
    }

    for(auto it = a.begin();it!=a.end();it++){
        b.push_back(make_pair(it->first, ((it->second)/sum)*100));
    }

    for(auto it = b.begin();it!=b.end();it++){
        for(auto j = b.begin();j!=b.end();j++){
            if(j->second<it->second){
                swap(j->second, it->second);
                swap(j->first, it->first);
            }
        }
    }

    for(auto it = b.begin();it!=b.end();it++){
        for(auto j = b.begin();j!=b.end();j++){
            if(j->second==it->second){
                if(j->first.compare(it->first)<0){
                    swap(j->second, it->second);
                    swap(j->first, it->first);
                }
            }
        }
    }

    for(auto j = b.begin();j!=b.end();j++){
            cout << j->first << " " << j->second << "%" << endl;
        }
    return 0;
}
