#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <pair<int, int> > m;
	vector <pair<int, int> > :: iterator it;
	for(int i=1; i<=n; i++){
		int a, b;
		cin >> a >> b;
		int c = a + b;
		m.push_back(make_pair(c, i));
	}
	sort(m.begin(), m.end());
	for(it = m.begin(); it != m.end(); it++){
		cout << (*it).second << ' ';
    }
	return 0;
}
