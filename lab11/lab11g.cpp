#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b){
	return a.first > b.first;
	if(a.first == b.first){
		return a.second < b.second;
	}
}
int main(){
	multimap <string, int> m;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string s;
		int a;
		cin >> s >> a;
		m.insert(make_pair(s, a));
	}
	vector <pair<string, int> > v(m.begin(), m.end());
	vector <pair<string, int> >:: iterator it = v.begin();
	sort(v.begin(), v.end(), cmp);
	map <string, int> ans;
	map <string, int> :: iterator it1;
	string cache = (*it).first;
	int cac = (*it).second;
	for(it; it != v.end(); it++){
		if(cache == (*it).first && cac != (*it).second){
			ans[(*it).first]++;
		}
		else
			ans.insert(make_pair((*it).first, 0));
		cac = (*it).second;
		cache = (*it).first;
	}
	for(it1 = ans.begin(); it1 != ans.end(); it1++){
		cout << (*it1).first << ' ';
		if((*it1).second+1 >= 3){
			cout << '+' << ((*it1).second+1)/3;
		}
		else
			cout << "NO BONUS";
		cout << '\n';
	}
	return 0;
}
