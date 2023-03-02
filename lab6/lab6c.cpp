#include <iostream>
using namespace std;

int eqls(int n, int x[], int y[]) {
    int u[101];
    int d[101]; 
    int sum = 0;
    for ( int i = 1; i <= 100; ++ i ) {
        u[i] = 0;
        d[i] = 0;
    }
    for ( int i = 1; i <= n; ++ i ){
        u[x[i]] ++;
    }
    for ( int i = 1; i <= n; ++ i ){
        d[y[i]] ++;
    }
    for ( int i = 1; i <= 100; ++ i ){
        sum += min (u[i], d[i]);
    }
    return sum;
}
int main () {
    int n;
    cin >> n;
    int x[n + 1], y[n + 1];
    for ( int i = 1; i <= n; ++ i ) {
        cin >> x[i];
    }
    for ( int j = 1; j <= n; ++ j ) {
        cin >> y[j];
    }
    cout << eqls (n, x, y);
    return 0;
}