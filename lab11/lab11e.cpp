#include <bits/stdc++.h>
using namespace std;
bool cntchar(string s, char a){
	if(count(s.begin(), s.end(), a) >= 1)	return 1;
	else return 0;
}
int main(){
	int n;
	vector <string> v;
	set <char> st;
	set <char> ans;
	cin >> n;
	for(int i=0; i<n; i++){
		string a;
		cin >> a;
		v.push_back(a);
		for(int j=0; j<a.size(); j++){
			st.insert(a[j]);
		}
	}
	set <char> :: iterator it = st.begin();
	set <char> :: iterator it2;
	for(it; it != st.end(); it++){
		int cnt = 0;
	for(int i=0; i<n; i++){
		if(cntchar(v[i], *it) == 1){
			cnt++;
		}
		if(cnt == n){
			ans.insert(*it);
			}
		}
	}
	if(!ans.empty()){
		for(it2 = ans.begin(); it2 != ans.end(); it2++)
			cout << (*it2) << ' ';
		}
	else cout << "NO COMMON CHARACTERS";
	return 0;
}
