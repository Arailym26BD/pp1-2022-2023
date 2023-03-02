#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	set <int> s;
	vector <int> v;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		v.push_back(a);
		s.insert(a);
	}	
	if(s.size() == v.size())	cout << "YES";
	else	cout << "NO";
	return 0;
}