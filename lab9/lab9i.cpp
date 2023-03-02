#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	set <string> m;
	vector<string> v;
	vector<string> :: iterator it;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	for(int i = 0; i<n; i++){
		if(m.find(v[i]) == m.end() || m.empty())	cout << "new user added" << '\n';
		else cout << "user already exists" << '\n';
		m.insert(v[i]);
	}
	return 0;
}
