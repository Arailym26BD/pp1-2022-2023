#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	set <char> st;
	set <char> :: iterator it;
	int cnt;
	for(int i=0; i<s.size(); i++){
		char a = s[i];
		st.insert(a);
	}
	for(it = st.begin(); it != st.end(); it++){
		if(count(s.begin(), s.end(), *it) % 2 == 0)	continue;
		else cnt++;
	}
	if(cnt > 1)
		cout << "JOJO";
	else 
		cout << "ZA WARUDO TOKI WO TOMARE";
	return 0;
}