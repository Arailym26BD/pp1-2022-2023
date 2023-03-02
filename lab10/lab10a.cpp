#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector <string> s;
	vector <int> mark;
	for(int i=0; i<n; i++){
		string str;
		int a;
		cin >> str >> a;
		s.push_back(str);
		mark.push_back(a);
	}
	sort(s.begin(), s.end());
	sort(mark.begin(), mark.end());
	map <string, int> m;
	for(int i=0; i<n; i++){
		cout << s[i] << ' ' << mark[i] << '\n';
	}
	
	return 0;
}