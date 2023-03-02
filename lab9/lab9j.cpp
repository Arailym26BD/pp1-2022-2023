#include <bits/stdc++.h>
using namespace std;
int main(){
	map <string, int> m;
	map <string, int> :: iterator it;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string s;
		int a;
		cin >> s >> a;
		int cache=0;
		if(m.find(s) != m.end()){
		cache = m[s];
		}
		m[s] = cache + a;
	}
	for(it = m.begin(); it != m.end(); it++)
		cout << (*it).first << ' ' << it->second << '\n';
	return 0;
}
