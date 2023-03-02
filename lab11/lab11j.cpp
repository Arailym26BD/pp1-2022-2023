#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<float, float>, float> &a, pair<pair<float, float>, float> &b){
	return a.second < b.second;
}
int main(){
	float z1, z2;
	cin >> z1 >> z2;
	int n;
	cin >> n;
	multimap<pair<float, float>, float > m;
	for(int i=0; i<n; i++){
		float a, b;
		cin >> a >> b;
		float distance = sqrt(pow((a - z1), 2) + pow((b - z2), 2));
		m.insert(make_pair(make_pair(a, b), distance));
	}
	vector <pair<pair<float, float>, float> > v(m.begin(), m.end());
	vector <pair<pair<float, float>, float> > :: iterator it;
	sort(v.begin(), v.end(), cmp);
	for(it = v.begin(); it != v.end(); it++)
		cout << (*it).first.first << ' ' << (*it).first.second << '\n';
	return 0; 
}