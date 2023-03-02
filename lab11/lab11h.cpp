#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	vector <char> v;
	cin >> n;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		int a;
		if(s[i] + n <= 90)
			a = s[i] + n;
		else
			a = s[i] + n - 26;
		v.push_back(a);
	}
	for(int i=0; i< v.size(); i++)
		cout << v[i];
	return 0;
}
