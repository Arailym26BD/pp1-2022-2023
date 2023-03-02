#include <bits/stdc++.h>
using namespace std;
int main(){
	map <string, int> mapOfWeek = {{ "SUN", 7 },
						{ "MON", 6 },
						{ "TUE", 5 },
						{ "WED", 4 },	
						{ "THU", 3 },
						{ "FRI", 2 },
						{ "SAT", 1 }};
	string s;
	cin >> s;
	cout << mapOfWeek[s];
	return 0;
}