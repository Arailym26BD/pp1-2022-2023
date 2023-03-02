#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}
int main(){
	int n1, n2, ind;
	cin >> n1 >> n2 >> ind;
	vector <int> v;
	int g = gcd(n1, n2);
	for(int i=1; i <= g/2; i++){
		if(g % i == 0){
			v.push_back(i);
		}
	}
	v.push_back(g);
	reverse(v.begin(), v.end());
	
	cout << v[ind-1];
	return 0;
}
