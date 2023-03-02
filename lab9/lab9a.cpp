#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int>& a, pair<int, int>& b){
    if(a.first == b.first)  return a.second < b.second;
    return a.first < b.first;
}
int main(){
	int n;
    cin >> n;
    vector <pair<int, int> > v;
    while(n--){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), comp);
    for(size_t i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
	return 0;
}